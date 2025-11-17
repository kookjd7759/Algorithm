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
#define For1k(x) for (int k = 1; int k <= x; ++k)

using namespace std;

int main() {
    Sync;

    int T;
    in T;
    while (T--) {
        string s, p;
        in s >> p;
        int n = (int)s.size();
        int m = (int)p.size();
        int ans = 0;
        int i = 0;
        while (i < n) {
            bool ok = true;
            if (i + m <= n) {
                Forj(m) {
                    if (s[i + j] != p[j]) {
                        ok = false;
                        break;
                    }
                }
            } else ok = false;

            if (ok) {
                ans++;
                i += m;
            } else {
                ans++;
                i++;
            }
        }
        out ans << "\n";
    }

    return 0;
}
