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

    int r, c; in r >> c;
    vector<vector<int>> a(r, vector<int>(c)), ans(r, vector<int>(c, 0));
    Fori(r) Forj(c) in a[i][j];
    for (int i = 1; i < r - 1; ++i) for (int j = 1; j < c - 1; ++j) if (a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j] && a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1]) ans[i][j] = 1;
    Fori(r) {
        Forj(c) out ans[i][j] << (j + 1 == c ? '\n' : ' ');
    }

    return 0;
}