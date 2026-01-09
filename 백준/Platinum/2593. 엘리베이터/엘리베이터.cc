#include <iostream>
#include <vector>
#include <queue>
#include <set>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;
using ll = long long;

ll mod_norm(ll a, ll m) {
    a %= m;
    if (a < 0) a += m;
    return a;
}

static ll ext_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) { x = 1; y = 0; return a; }
    ll x1, y1;
    ll g = ext_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

bool canTrans(ll s1, ll g1, ll s2, ll g2, ll limit) {
    ll a1 = s1, m1 = g1;
    ll a2 = s2, m2 = g2;
    ll L = limit;

    if (m1 <= 0 || m2 <= 0) return false;
    if (a1 < 1 || a2 < 1 || a1 > L || a2 > L) return false;

    ll x, y;
    ll g = ext_gcd(m1, m2, x, y);
    ll diff = a2 - a1;
    if (diff % g != 0) return false;

    ll m2_g = m2 / g;

    ll inv = mod_norm(x, m2_g);

    ll rhs = diff / g;
    ll t0 = mod_norm(rhs * inv, m2_g);

    ll f0 = a1 + m1 * t0;

    ll lcm = (m1 / g) * m2;

    ll need = max(a1, a2);
    if (f0 < need) {
        ll k = (need - f0 + lcm - 1) / lcm;
        f0 += k * lcm;
    }
    return (f0 <= L);

}

bool canUse(pair<int, int> elevator, int pos) {
    if (pos < elevator.first) return false;
    return (pos - elevator.first) % elevator.second == 0; 
}

struct Node {
    int pos;
    vector<int> order;
};

int main() {
	Sync;

	int N, M, start, target; cin >> N >> M;
	vector<bool> visited(M, false);
	vector<pair<int, int>> elevators(M);  // start, gap
    for (int i = 0; i < M; ++i) cin >> elevators[i].first >> elevators[i].second;
	cin >> start >> target;
    vector<vector<int>> graph(M);
    for (int i = 0; i < M - 1; ++i) {
        for (int j = i + 1; j < M; ++j) {
            if (canTrans(elevators[i].first, elevators[i].second,
                elevators[j].first, elevators[j].second, N)) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    if (start == target) {
        cout << 0;
        return 0;
    }
    
    set<int> target_set;
    for (int i = 0; i < elevators.size(); ++i) {
        if (canUse(elevators[i], target)) {
            target_set.insert(i);
        }
    }
	queue<Node> que;
    for (int i = 0; i < elevators.size(); ++i) {
        if (canUse(elevators[i], start)) {
            que.push({ i, vector<int>(1, i) });
            visited[i] = true;
        }
    }

	while (!que.empty()) {
		Node node = que.front();
		que.pop();

        if (target_set.count(node.pos)) {
            cout << node.order.size() << "\n";
            for (const int& a : node.order) cout << a + 1 << "\n";
            return 0;
        }

        for (const int& nxt : graph[node.pos]) {
            if (visited[nxt]) continue;

            Node nNode = node;
            nNode.pos = nxt;
            nNode.order.push_back(nxt);
            que.push(nNode);
            visited[nxt] = true;

        }
	}
    
    cout << "-1";

	return 0;
}
