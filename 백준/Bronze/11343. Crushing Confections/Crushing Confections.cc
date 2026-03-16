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
        int r, c; in r >> c;
        vector<vector<char>> a(r, vector<char>(c));
        Fori(r) Forj(c) in a[i][j];
        bool ok = false;
        Fori(r) {
            for (int j = 0; j + 2 < c; ++j) {
                if (a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2]) {
                    out i + 1 << " " << j + 1 << " " << i + 1 << " " << j + 2 << " " << i + 1 << " " << j + 3 endl;
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }
        if (!ok) {
            Forj(c) {
                for (int i = 0; i + 2 < r; ++i) {
                    if (a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j]) {
                        out i + 1 << " " << j + 1 << " " << i + 2 << " " << j + 1 << " " << i + 3 << " " << j + 1 endl;
                        ok = true;
                        break;
                    }
                }
                if (ok) break;
            }
        }
        if (!ok) out "no set found" endl;
    }

    return 0;
}