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

    int n, m;
    in n >> m;

    vector<vector<ll>> A(n, vector<ll>(m));
    Fori(n) Forj(m) in A[i][j];

    ll c11, c12, c21, c22;
    in c11 >> c12 >> c21 >> c22;

    vector<vector<ll>> B(n, vector<ll>(m));

    Fori(n) {
        Forj(m) {
            ll s = A[i][j];
            if (i > 0 && j > 0) s -= B[i - 1][j - 1] * c11;
            if (i > 0)          s -= B[i - 1][j]     * c12;
            if (j > 0)          s -= B[i][j - 1]     * c21;
            B[i][j] = s / c22;  // c22 = ±1 по условию, деление без остатка
        }
    }

    Fori(n) {
        Forj(m) {
            if (j) cout << ' ';
            out B[i][j];
        }
        ent;
    }

    return 0;
}
