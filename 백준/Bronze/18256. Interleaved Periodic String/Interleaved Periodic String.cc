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
        string s; in s;
        int n = (int)s.size(), full = (1 << n) - 1;
        vector<int> per(1 << n, 0);

        for (int mask = 1; mask <= full; ++mask) {
            string t;
            Fori(n) if (mask & (1 << i)) t += s[i];
            int m = (int)t.size(), best = m;
            for (int p = 1; p <= m; ++p) {
                if (m % p) continue;
                bool ok = true;
                for (int i = p; i < m; ++i) if (t[i] != t[i % p]) { ok = false; break; }
                if (ok) { best = p; break; }
            }
            per[mask] = best;
        }

        int ans = n;
        for (int mask = 0; mask <= full; ++mask) ans = min(ans, per[mask] + per[full ^ mask]);
        out ans << "\n";
    }

    return 0;
}