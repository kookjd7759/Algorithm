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
    vector<vector<int>> a(n, vector<int>(n));
    Fori(n) Forj(n) in a[i][j];
    int q; in q;
    while (q--) {
        int t; in t;
        if (t == 1) {
            int r; in r; --r;
            rotate(a[r].begin(), a[r].end() - 1, a[r].end());
        } else {
            vector<vector<int>> b(n, vector<int>(n));
            Fori(n) Forj(n) b[j][n - i - 1] = a[i][j];
            a = b;
        }
    }
    Fori(n) {
        Forj(n) out a[i][j] << (j + 1 == n ? "" : " ");
        if (i + 1 != n) ent;
    }

    return 0;
}