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
    Fixed(10);

    int n; in n;
    ll mn = (1LL << 60), mx = -(1LL << 60), h = 0;
    Fori(n) {
        ll x, y; in x >> y;
        if (y == 0) mn = min(mn, x), mx = max(mx, x);
        h = max(h, llabs(y));
    }

    if (mn == (1LL << 60) || mx == -(1LL << 60) || mn == mx || h == 0) out 0.0 endl;
    else out (mx - mn) * h / 2.0 endl;

    return 0;
}