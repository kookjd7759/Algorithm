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

    int N, M, q; in N >> M >> q;
    vector<vector<int>> a(N, vector<int>(M));
    Fori(N) Forj(M) in a[i][j];
    vector<int> pos(N), rev(N);
    Fori(N) pos[i] = rev[i] = i;
    while (q--) {
        int t; in t;
        if (!t) {
            int i, j, k; in i >> j >> k;
            a[pos[i]][j] = k;
        } else {
            int i, j; in i >> j;
            swap(pos[i], pos[j]);
            rev[pos[i]] = i;
            rev[pos[j]] = j;
        }
    }
    Fori(N) {
        int r = pos[i];
        Forj(M) out a[r][j] << (j + 1 == M ? '\n' : ' ');
    }

    return 0;
}