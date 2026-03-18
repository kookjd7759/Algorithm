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

ll Pos(ll a, ll b, ll t) {
    ll d = llabs(b - a), dir = (b > a ? 1 : -1), x = t % (2 * d);
    if (x <= d) return a + dir * x;
    return b - dir * (x - d);
}

int main() {
    Sync;

    int n, m; in n >> m;
    vector<pair<ll, ll>> car(n);
    Fori(n) in car[i].first >> car[i].second;
    while (m--) {
        ll x, y, t; in x >> y >> t;
        int ans = 0;
        Fori(n) {
            ll p = Pos(car[i].first, car[i].second, t);
            if (x <= p && p <= y) ++ans;
        }
        out ans endl;
    }

    return 0;
}