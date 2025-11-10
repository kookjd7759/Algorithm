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

    int T; in T;
    while (T--) {
        int N, K; in N >> K;
        int* times = new int[N + 1];
        For1i(N) in times[i];

        vector<vector<int>> graph(N + 1);
        vector<int> indegree(N + 1, 0);
        Fori(K) {
            int from, to; in from >> to;
            graph[from].push_back(to);
            indegree[to]++;
        }

        int target; in target;

        vector<int> dp(N + 1, 0);
        queue<int> q;

        For1i(N) {
            if (indegree[i] == 0) {
                dp[i] = times[i];
                q.push(i);
            }
        }

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int nxt : graph[cur]) {
                dp[nxt] = max(dp[nxt], dp[cur] + times[nxt]);
                if (--indegree[nxt] == 0) q.push(nxt);
            }
        }

        out dp[target] endl;
    }
}
