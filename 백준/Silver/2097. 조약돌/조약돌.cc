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

    ll N; in N;

    if (N <= 4) {
        out 4;
        return 0;
    }

    ll ans = (ll)4e18;
    for (ll a = 2; a * a <= N; ++a) {
        ll b = (N + a - 1) / a;
        if (b < 2) b = 2;
        ll per = 2 * (a + b) - 4;
        if (per < ans) ans = per;
    }

    out ans;
    return 0;
}
