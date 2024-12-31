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

const ll MOD(1000000007);

int main() {
    Sync;

    ll n; in n;
    ll* arr = new ll[n];
    ll* two = new ll[n];
    ll temp(1), p(0), m(0);
    Fori(n) in arr[i];
    sort(arr, arr + n);

    Fori(n) {
        two[i] = temp - 1;
        temp *= 2;
        temp %= MOD;
    }

    for (int i = n - 1; i > 0; --i) {
        p += two[i] * arr[i];
        m += two[i] * arr[n - 1 - i];
        p %= MOD;
        m %= MOD;
    }
    out (p % MOD + MOD - m % MOD) % MOD endl;
}