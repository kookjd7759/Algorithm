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

    ll n, m; in n >> m;
    ll sx, sy; in sx >> sy;
    ll ex, ey; in ex >> ey;

    if (sx == ex && sy == ey) { out "YES" endl; return 0; }
    if (n == 1 || m == 1) { out "NO" endl; return 0; }
    out ((((sx + sy) & 1LL) == ((ex + ey) & 1LL)) ? "YES" : "NO") endl;

    return 0;
}
