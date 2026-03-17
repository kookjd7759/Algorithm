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

ll Pow(ll a, ll b) {
    ll r = 1;
    while (b) {
        if (b & 1) r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}

ll Comb(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    ll num = 1, den = 1;
    For1i(r) num = num * (n - r + i) % MOD, den = den * i % MOD;
    return num * Pow(den, MOD - 2) % MOD;
}

int main() {
    Sync;

    int T; in T;
    For1i(T) {
        int M, N; in M >> N;
        ll ans = 0;
        for (int j = 0; j <= M; ++j) {
            ll term = Comb(M, j) * Pow(j, N) % MOD;
            if ((M - j) & 1) ans = (ans - term + MOD) % MOD;
            else ans = (ans + term) % MOD;
        }
        out "Case #" << i << ": " << ans << "\n";
    }

    return 0;
}