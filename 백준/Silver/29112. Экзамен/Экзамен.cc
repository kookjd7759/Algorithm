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

    ll l, r;
    in l >> r;

    const ll C = 36000;

    ll ans = 0;

    if (l == 0) {
        ++ans;
        l = 1;
    }

    for (ll y = 1; ; ++y) {
        __int128 y6 = 1;
        Fori(6) y6 *= y;

        __int128 x = (__int128)C * y6;
        if (x > r) break;
        if (x >= l) ++ans;
    }

    out ans endl;

    return 0;
}
