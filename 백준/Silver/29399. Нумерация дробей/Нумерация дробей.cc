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

    ll n;
    in n;
    long double D = sqrtl(1.0L + 8.0L * (long double)n);
    ll s = (ll)((D + 1.0L) / 2.0L);
    while (s * (s - 1) / 2 < n) ++s;
    while (s > 1 && (s - 1) * (s - 2) / 2 >= n) --s;
    ll prev = (s - 1) * (s - 2) / 2;
    ll offset = n - prev;
    ll num, den;
    if (s % 2 == 0) {
        num = offset;
        den = s - offset;
    } else {
        num = s - offset;
        den = offset;
    }
    out num << "/" << den;
    return 0;
}
