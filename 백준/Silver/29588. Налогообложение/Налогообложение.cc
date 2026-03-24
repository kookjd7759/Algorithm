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
    Fixed(2);

    ll X; int k; in X >> k;
    vector<ll> U(k + 1);
    vector<int> p(k + 2);
    For1i(k) in U[i];
    For1i(k + 1) in p[i];

    long double ans = 0;
    ll prev = 0;

    For1i(k) {
        if (X <= prev) break;
        ll take = min(X, U[i]) - prev;
        if (take > 0) ans += (long double)take * p[i] / 100.0;
        prev = U[i];
    }

    if (X > prev) ans += (long double)(X - prev) * p[k + 1] / 100.0;

    out ans endl;

    return 0;
}