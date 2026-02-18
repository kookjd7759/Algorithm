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
        int m1; in m1;
        int g1[4][4] = {};
        Fori(m1) { int u, v; in u >> v; g1[u][v] = g1[v][u] = 1; }
        int m2; in m2;
        int g2[4][4] = {};
        Fori(m2) { int u, v; in u >> v; g2[u][v] = g2[v][u] = 1; }

        vector<int> p = {1,2,3};
        int ok = 0;
        sort(p.begin(), p.end());
        do {
            int good = 1;
            For1i(3) For1j(3) if (g1[i][j] != g2[p[i-1]][p[j-1]]) good = 0;
            if (good) { ok = 1; break; }
        } while (next_permutation(p.begin(), p.end()));

        out (ok ? "yes" : "no") endl;
    }

    return 0;
}
