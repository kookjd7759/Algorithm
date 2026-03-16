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
        int M; in M;
        vector<vector<int>> has(101, vector<int>(4));
        Fori(M) {
            string s; in s;
            int p = 0, v = 0;
            while (isdigit(s[p])) v = v * 10 + (s[p++] - '0');
            int c = s[p] == 'b' ? 0 : s[p] == 'g' ? 1 : s[p] == 'r' ? 2 : 3;
            has[v][c] = 1;
        }
        bool ok = false;
        For1i(100) {
            int cnt = 0;
            Forj(4) cnt += has[i][j];
            if (cnt >= 3) ok = true;
        }
        Forj(4) {
            int cur = 0;
            For1i(100) {
                if (has[i][j]) ++cur;
                else cur = 0;
                if (cur >= 3) ok = true;
            }
        }
        out (ok ? "YES" : "NO") endl;
    }

    return 0;
}