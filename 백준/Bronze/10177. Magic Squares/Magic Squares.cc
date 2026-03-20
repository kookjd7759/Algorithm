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

    int n; in n;
    while (n--) {
        int m; in m;
        vector<vector<ll>> a(m, vector<ll>(m));
        Fori(m) Forj(m) in a[i][j];

        ll s = 0;
        Forj(m) s += a[0][j];

        bool ok = true;
        Fori(m) {
            ll r = 0;
            Forj(m) r += a[i][j];
            if (r != s) ok = false;
        }

        Forj(m) {
            ll c = 0;
            Fori(m) c += a[i][j];
            if (c != s) ok = false;
        }

        ll d1 = 0, d2 = 0;
        Fori(m) d1 += a[i][i], d2 += a[i][m - 1 - i];
        if (d1 != s || d2 != s) ok = false;

        if (ok) out "Magic square of size " << m endl;
        else out "Not a magic square" endl;
    }

    return 0;
}