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

    int K; in K;
    For1i(K) {
        int n, m; in n >> m;
        vector<vector<int>> adj(n + 1);
        Forj(m) { int a, b; in a >> b; adj[a].push_back(b); adj[b].push_back(a); }
        int s; in s;
        auto& v = adj[s];
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        out "Data Set " << i << ":" endl;
        Forj((int)v.size()) { out v[j]; if (j + 1 < (int)v.size()) out " "; }
        ent;
        ent;
    }

    return 0;
}
