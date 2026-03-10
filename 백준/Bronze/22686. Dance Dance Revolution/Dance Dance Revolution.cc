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

int Pos(char c) {
    if (c == 'L') return 0;
    if (c == 'D') return 1;
    if (c == 'U') return 2;
    return 3;
}

int X(int p) {
    if (p == 0) return -1;
    if (p == 3) return 1;
    return 0;
}

int main() {
    Sync;

    int T; in T;
    while (T--) {
        string s; in s;
        int n = s.size();
        bool bad = 0;
        for (int i = 1; i < n; ++i) if (s[i] == s[i - 1]) bad = 1;

        if (bad) {
            out "No" endl;
            continue;
        }

        bool dp[5][5][2] = {}, ndp[5][5][2] = {};
        int p = Pos(s[0]);
        dp[p][4][0] = 1;
        dp[4][p][1] = 1;

        for (int idx = 1; idx < n; ++idx) {
            memset(ndp, 0, sizeof(ndp));
            int q = Pos(s[idx]);

            Fori(5) Forj(5) Fork(2) if (dp[i][j][k]) {
                if (k == 1) {
                    if (j != 4 && q == j) continue;
                    if (j != 4 && X(q) > X(j)) continue;
                    ndp[q][j][0] = 1;
                } else {
                    if (i != 4 && q == i) continue;
                    if (i != 4 && X(i) > X(q)) continue;
                    ndp[i][q][1] = 1;
                }
            }

            memcpy(dp, ndp, sizeof(dp));
        }

        bool ok = 0;
        Fori(5) Forj(5) Fork(2) if (dp[i][j][k]) ok = 1;
        out (ok ? "Yes" : "No") endl;
    }

    return 0;
}