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
    vector<int> P(n + 1, -1), Mv(n + 1, -1);

    Fori(m) {
        int a, c; string b;
        in a >> b >> c;
        if (b[0] == 'P') P[a] = c;
        else Mv[a] = c;
    }

    int mn = 0, mx = 0;
    For1i(n) {
        bool p1 = (P[i] == 1), p0 = (P[i] == 0), pu = (P[i] == -1);
        bool m1 = (Mv[i] == 1), m0 = (Mv[i] == 0), mu = (Mv[i] == -1);

        bool canPlant = (!p0) && (!m1);
        bool mustPlant = (p1) && (m0);

        if (mustPlant) ++mn, ++mx;
        else if (canPlant) ++mx;
    }

    out mn spc mx endl;

    return 0;
}
