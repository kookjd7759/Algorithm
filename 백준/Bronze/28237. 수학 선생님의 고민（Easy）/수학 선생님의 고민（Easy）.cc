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

    ll n; in n;
    ll m = n + 2;
    vector<ll> dn, dm;
    for (ll i = 1; i * i <= n; ++i) if (n % i == 0) { dn.push_back(i); if (i * i != n) dn.push_back(n / i); }
    for (ll i = 1; i * i <= m; ++i) if (m % i == 0) { dm.push_back(i); if (i * i != m) dm.push_back(m / i); }

    for (ll a : dn) {
        ll c = n / a;
        for (ll pb : dm) {
            ll b = pb, d = -m / b;
            if (a * d + b * c == n + 1) { out a spc b spc c spc d endl; return 0; }
            b = -pb, d = -m / b;
            if (a * d + b * c == n + 1) { out a spc b spc c spc d endl; return 0; }
        }
    }

    out -1 endl;
    return 0;
}