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

double Cost(ll k, ll p, ll x, ll m) { return (double)x * m + (double)k * p / m; }

int main() {
    Sync;
    Fixed(3);

    int n; in n;
    while (n--) {
        ll k, p, x; in k >> p >> x;
        double t = sqrt((double)k * p / x);
        ll a = max(1LL, (ll)floor(t)), b = max(1LL, (ll)ceil(t));
        double ans = min(Cost(k, p, x, a), Cost(k, p, x, b));
        for (ll m = max(1LL, a - 3); m <= a + 3; ++m) ans = min(ans, Cost(k, p, x, m));
        for (ll m = max(1LL, b - 3); m <= b + 3; ++m) ans = min(ans, Cost(k, p, x, m));
        out ans endl;
    }

    return 0;
}