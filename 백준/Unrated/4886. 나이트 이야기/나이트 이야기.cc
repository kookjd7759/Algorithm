#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

using ll = long long;

ll knightDistance(const pair<ll, ll>& p1, const pair<ll, ll>& p2) {
	ll x(abs(p1.first - p2.first)), y(abs(p1.second - p2.second));
	if (x < y) swap(x, y);

	if (x == 1 && y == 0) return 3;
	if (x == 2 && y == 2) return 4;

	ll ans = max((x + 1) / 2, (x + y + 2) / 3);
	if (((x + y) & 1) != (ans & 1)) ans++;
	return ans;
}

int popcount(int bit) {
	int cnt(0);
	while (bit) {
		if (bit & 1)
			cnt++;
		bit >>= 1;
	}
	return cnt;
}

ll solve(const vector<vector<ll>>& graph) {
	int len(graph.size());
	vector<ll> dp(1LL << len, (1LL << 60));
	
	int full = (1 << len) - 1;
	dp[0] = 0;
	for (int mask = 0; mask <= full; ++mask) {
		int k = popcount((unsigned)mask);
		if (k >= len) continue;
		for (int j = 0; j < len; ++j) if (!(mask & (1 << j))) {
			dp[mask | (1 << j)] = min(dp[mask | (1 << j)], dp[mask] + graph[k][j]);
		}
	}
	return dp[full];
}

int main() {
    Sync;

	int tc(0);
	while (true) {
		int n; cin >> n;
		if (!n) break;
		tc++;

		vector<pair<ll, ll>> knight(n), target(n);
		for (int i = 0; i < n; ++i) cin >> knight[i].first >> knight[i].second;
		for (int i = 0; i < n; ++i) cin >> target[i].first >> target[i].second;
		vector<vector<ll>> graph(n, vector<ll>(n));
		for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
			ll distance = knightDistance(knight[i], target[j]);
			graph[i][j] = distance;
		}

		cout << tc << ". " << solve(graph) << "\n";
	}

    return 0;
}
