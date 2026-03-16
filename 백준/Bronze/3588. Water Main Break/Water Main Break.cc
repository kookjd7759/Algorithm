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
        int n, s, f; in n >> s >> f;
        ll ans = 0;
        Forj(n) {
            int si, fi, ri; in si >> fi >> ri;
            int l = max(s, si), r = min(f, fi);
            if (l <= r) ans += 1LL * (r - l + 1) * ri;
        }
        out "Data Set " << i << ":" endl;
        out ans endl;
        ent;
    }

    return 0;
}