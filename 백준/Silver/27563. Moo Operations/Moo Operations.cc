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
    int q; in q;
    while (q--) {
        string s; in s;
        int n = s.size(), ans = 1e9;
        if (n >= 3) {
            for (int i = 0; i + 2 < n; ++i) {
                if (s[i + 1] != 'O') continue;
                int cur = n - 3;
                if (s[i] != 'M') ++cur;
                if (s[i + 2] != 'O') ++cur;
                ans = min(ans, cur);
            }
        }
        out (ans == (int)1e9 ? -1 : ans) endl;
    }
    return 0;
}