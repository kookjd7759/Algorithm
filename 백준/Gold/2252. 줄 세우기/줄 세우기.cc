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

    int n, m; in n >> m;
    vector<vector<int>> graph(n + 1);
    vector<int> indegree(n + 1, 0), result;
    Fori(m) {
        int a, b; in a >> b;
        graph[a].push_back(b);
        ++indegree[b];
    }

    queue<int> q;
    For1i(n) if (indegree[i] == 0) q.push(i);

    while (!q.empty()) {
        int now = q.front(); q.pop();
        result.push_back(now);

        for (int next : graph[now]) {
            indegree[next]--;
            if (indegree[next] == 0) q.push(next);
        }
    }

    for (const int n : result) out n << ' ';
}