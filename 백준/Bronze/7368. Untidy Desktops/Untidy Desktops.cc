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

    while (1) {
        int n; in n;
        if (n == 0) break;

        vector<int> r(n), c(n), w(n), h(n), chk(n);
        Fori(n) in r[i] >> c[i] >> w[i] >> h[i];

        Fori(n) for (int j = i + 1; j < n; ++j) {
            int r1s = r[i], r1e = r[i] + h[i] - 1, c1s = c[i], c1e = c[i] + w[i] - 1;
            int r2s = r[j], r2e = r[j] + h[j] - 1, c2s = c[j], c2e = c[j] + w[j] - 1;
            if (max(r1s, r2s) <= min(r1e, r2e) && max(c1s, c2s) <= min(c1e, c2e)) chk[i] = chk[j] = 1;
        }

        int ans = 0;
        Fori(n) ans += chk[i];
        out ans endl;
    }

    return 0;
}