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
    int n; in n;
    ll x1 = 0, y1 = 0, z1 = 0, x2 = (ll)4e18, y2 = (ll)4e18, z2 = (ll)4e18;
    Fori(n) {
        ll a, b, c, d, e, f; in a >> b >> c >> d >> e >> f;
        x1 = max(x1, a); y1 = max(y1, b); z1 = max(z1, c);
        x2 = min(x2, d); y2 = min(y2, e); z2 = min(z2, f);
    }
    if (x1 >= x2 || y1 >= y2 || z1 >= z2) out 0;
    else out (x2 - x1) * (y2 - y1) * (z2 - z1);
    return 0;
}