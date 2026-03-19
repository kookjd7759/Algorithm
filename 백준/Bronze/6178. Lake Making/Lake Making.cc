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

    int R, C, E, N; in R >> C >> E >> N;
    vector<vector<int>> a(R, vector<int>(C));
    Fori(R) Forj(C) in a[i][j];

    while (N--) {
        int rs, cs, d; in rs >> cs >> d;
        --rs, --cs;
        int mx = 0;
        for (int i = rs; i < rs + 3; ++i) for (int j = cs; j < cs + 3; ++j) mx = max(mx, a[i][j]);
        int h = mx - d;
        for (int i = rs; i < rs + 3; ++i) for (int j = cs; j < cs + 3; ++j) if (a[i][j] > h) a[i][j] = h;
    }

    ll sum = 0;
    Fori(R) Forj(C) if (a[i][j] < E) sum += E - a[i][j];
    out sum * 72 * 72 endl;

    return 0;
}