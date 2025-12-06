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

ll F(ll x, ll A3, ll B2, ll C) {
    return A3 * x * x * x + B2 * x * x + C * x;
}

int main() {
    Sync;

    ll x1, x2; in x1 >> x2;

    ll a, b, c, d, e;
    in a >> b >> c >> d >> e;

    ll A = a;
    ll B = b - d;
    ll C = c - e;

    ll A3 = A / 3;
    ll B2 = B / 2;

    ll ans = F(x2, A3, B2, C) - F(x1, A3, B2, C);
    out ans;

    return 0;
}
