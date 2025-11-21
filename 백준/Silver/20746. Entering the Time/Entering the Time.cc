#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int main() {
    Sync;

    string s_start, s_target;
    in s_start;
    in s_target;

    auto parse_time = [&](const string& s) -> int {
        int h = (s[0] - '0') * 10 + (s[1] - '0');
        int m = (s[3] - '0') * 10 + (s[4] - '0');
        return h * 60 + m;
    };

    int start = parse_time(s_start);
    int target = parse_time(s_target);

    const int MAXT = 24 * 60;
    vector<int> dist(MAXT, -1), par(MAXT, -1);
    queue<int> q;

    dist[start] = 0;
    q.push(start);

    auto valid = [&](int h, int m) -> bool {
        return (0 <= h && h < 24 && 0 <= m && m < 60);
    };

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (cur == target) break;

        int h = cur / 60;
        int m = cur % 60;
        int d[4];
        d[0] = h / 10;
        d[1] = h % 10;
        d[2] = m / 10;
        d[3] = m % 10;

        for (int pos = 0; pos < 4; ++pos) {
            for (int dir = -1; dir <= 1; dir += 2) {
                int nd[4] = {d[0], d[1], d[2], d[3]};
                nd[pos] = (nd[pos] + dir + 10) % 10;
                int nh = nd[0] * 10 + nd[1];
                int nm = nd[2] * 10 + nd[3];
                if (!valid(nh, nm)) continue;
                int nxt = nh * 60 + nm;
                if (dist[nxt] == -1) {
                    dist[nxt] = dist[cur] + 1;
                    par[nxt] = cur;
                    q.push(nxt);
                }
            }
        }
    }

    vector<int> path;
    int cur = target;
    while (cur != -1) {
        path.push_back(cur);
        cur = par[cur];
    }
    reverse(path.begin(), path.end());

    out (int)path.size() endl;
    for (int t : path) {
        int h = t / 60;
        int m = t % 60;
        out setw(2) << setfill('0') << h << ":" << setw(2) << m endl;
    }

    return 0;
}
