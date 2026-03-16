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

    ll w, d, tc = 1;
    while (in w >> d, w || d) {
        long double age = 5730.0L * log2l((810.0L * w) / d);
        ll unit = age < 10000.0L ? 100 : 1000;
        ll ans = (ll)floor(age / unit + 0.5L) * unit;
        out "Sample #" << tc++ endl;
        out "The approximate age is " << ans << " years." endl;
        ent;
    }

    return 0;
}