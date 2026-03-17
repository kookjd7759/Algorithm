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
    For1i(T) {
        int N; in N;
        vector<vector<int>> a(N, vector<int>(N));
        int k = 0, r = 0, c = 0;
        Fori(N) Forj(N) in a[i][j], k += (i == j ? a[i][j] : 0);

        Fori(N) {
            vector<int> chk(N + 1);
            bool dup = false;
            Forj(N) {
                if (chk[a[i][j]]) dup = true;
                chk[a[i][j]] = 1;
            }
            r += dup;
        }

        Forj(N) {
            vector<int> chk(N + 1);
            bool dup = false;
            Fori(N) {
                if (chk[a[i][j]]) dup = true;
                chk[a[i][j]] = 1;
            }
            c += dup;
        }

        out "Case #" << i << ": " << k << " " << r << " " << c << "\n";
    }

    return 0;
}