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
    ll ans = 0, lim = 1;
    Fori(n) lim *= 10;

    for (ll x = 0; x < lim; ++x) {
        int a[6] = {}, t = x;
        for (int i = n - 1; i >= 0; --i) a[i] = t % 10, t /= 10;
        int s1 = 0, s2 = 0, so = 0, se = 0;
        Fori(n / 2) s1 += a[i];
        for (int i = n / 2; i < n; ++i) s2 += a[i];
        Fori(n) if (i & 1) se += a[i]; else so += a[i];
        if (s1 == s2 && so == se) ans++;
    }

    out ans endl;

    return 0;
}