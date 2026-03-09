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

ll Sum(ll l, ll r){
    if(l > r) return 0;
    return (l + r) * (r - l + 1) / 2;
}

ll Pref(ll n, ll k, ll p){
    if(p <= 0) return 0;
    if(p <= k) return Sum(n - k + 1, n - k + p);
    return Sum(n - k + 1, n) + Sum(1, p - k);
}

int main() {
    Sync;

    ll n, k, i, j; in n >> k >> i >> j;
    out Pref(n, k, j) - Pref(n, k, i - 1);

    return 0;
}