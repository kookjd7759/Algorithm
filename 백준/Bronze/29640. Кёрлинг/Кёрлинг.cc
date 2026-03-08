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
    int a = 0, b = 0;
    while (n--) {
        int m, k; in m >> k;
        vector<ll> d1(m), d2(k);
        Fori(m) {
            ll x, y; in x >> y;
            d1[i] = x * x + y * y;
        }
        Fori(k) {
            ll x, y; in x >> y;
            d2[i] = x * x + y * y;
        }
        ll mn1 = *min_element(d1.begin(), d1.end()), mn2 = *min_element(d2.begin(), d2.end());
        if (mn1 < mn2) {
            Fori(m) if (d1[i] < mn2) ++a;
        } else if (mn2 < mn1) {
            Fori(k) if (d2[i] < mn1) ++b;
        }
    }
    out a << ":" << b endl;
    return 0;
}