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
    vector<vector<int>> a(n, vector<int>(m));
    Fori(n) Forj(m) in a[i][j];

    ll card = 0, inter = 0;
    Fori(n) Forj(m) if (a[i][j]) {
        if (j + 1 < m && a[i][j + 1]) ++card, ++inter;
        if (i + 1 < n && a[i + 1][j]) ++card, ++inter;
        if (i + 1 < n && j + 1 < m && a[i + 1][j + 1]) ++inter;
        if (i + 1 < n && j - 1 >= 0 && a[i + 1][j - 1]) ++inter;
    }

    out card spc inter endl;

    return 0;
}