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

struct Edge {
    int to, rev, cap;
};

int main() {
    Sync;

    int a1, a2, a3, b1, b2, b3; in a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int S = 0, T = 7;
    vector<vector<Edge>> g(8);

    auto AddEdge = [&](int u, int v, int c) {
        g[u].push_back({v, (int)g[v].size(), c});
        g[v].push_back({u, (int)g[u].size() - 1, 0});
    };

    AddEdge(S, 1, a1);
    AddEdge(S, 2, a2);
    AddEdge(S, 3, a3);

    AddEdge(1, 4, 101000);
    AddEdge(1, 6, 101000);
    AddEdge(2, 5, 101000);
    AddEdge(2, 6, 101000);
    AddEdge(3, 4, 101000);
    AddEdge(3, 5, 101000);
    AddEdge(3, 6, 101000);

    AddEdge(4, T, b1);
    AddEdge(5, T, b2);
    AddEdge(6, T, b3);

    int flow = 0;
    while (1) {
        vector<int> par(8, -1), pe(8, -1);
        queue<int> q;
        q.push(S);
        par[S] = S;

        while (!q.empty() && par[T] == -1) {
            int u = q.front(); q.pop();
            Fori(g[u].size()) {
                auto &e = g[u][i];
                if (par[e.to] == -1 && e.cap > 0) par[e.to] = u, pe[e.to] = i, q.push(e.to);
            }
        }

        if (par[T] == -1) break;

        int aug = 1e9;
        for (int v = T; v != S; v = par[v]) aug = min(aug, g[par[v]][pe[v]].cap);
        for (int v = T; v != S; v = par[v]) {
            auto &e = g[par[v]][pe[v]];
            e.cap -= aug;
            g[v][e.rev].cap += aug;
        }
        flow += aug;
    }

    out flow endl;

    return 0;
}