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

const ll MOD = 1000000007LL;

ll modpow(ll a, long long e) {
    ll r = 1;
    while (e > 0) {
        if (e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    Sync;

    int N;
    in N;
    ll ans = 0;
    Fori(N) {
        ll C;
        long long K;
        in C >> K;
        if (K == 0) continue;
        ll term = (C % MOD) * (K % MOD) % MOD;
        ll p = modpow(2, K - 1);
        term = term * p % MOD;
        ans += term;
        if (ans >= MOD) ans -= MOD;
    }
    out ans endl;

    return 0;
}
