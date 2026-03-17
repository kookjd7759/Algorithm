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

    ll C, n, cur = 0; in C >> n;
    bool ok = 1;
    Fori(n) {
        ll l, e, w; in l >> e >> w;
        if (l > cur) ok = 0;
        cur -= l;
        cur += e;
        if (cur > C) ok = 0;
        if (i == 0 && l) ok = 0;
        if (i == n - 1 && (e || w)) ok = 0;
        if (w && cur != C) ok = 0;
        if (i != n - 1 && cur < C && w) ok = 0;
    }
    if (cur != 0) ok = 0;
    out (ok ? "possible" : "impossible") endl;

    return 0;
}