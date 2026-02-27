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

static inline ll serial(ll Y, ll M, ll D) { return (Y - 1) * 360 + (M - 1) * 30 + (D - 1); }

int main() {
    Sync;

    ll sy, sm, sd, ey, em, ed; in sy >> sm >> sd; in ey >> em >> ed;
    ll s = serial(sy, sm, sd), e = serial(ey, em, ed), diff = e - s;
    ll months = min(36LL, diff / 30);
    ll years = diff / 360;
    ll sumA = 0;
    if (years > 0) {
        ll n = years - 1;
        if (n % 2 == 0) { ll m = n / 2; sumA = m * m; }
        else { ll m = n / 2; sumA = m * (m + 1); }
    }
    ll annual = 15 * years + sumA;

    out annual spc months endl;
    out diff << "days" endl;

    return 0;
}