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

ll pref(ll N) {
    if (N <= 0) return 0;
    long double disc = sqrtl(1.0L + 8.0L * (long double)N);
    ll M = (ll)((disc - 1.0L) / 2.0L);
    while ((__int128)M * (M + 1) / 2 > N) --M;
    while ((__int128)(M + 1) * (M + 2) / 2 <= N) ++M;
    ll T = (ll)((__int128)M * (M + 1) / 2);
    ll r = N - T;
    ll Sfull = (ll)((__int128)M * (M + 1) * (M + 2) / 6);
    ll Srem = r * (r + 1) / 2;
    return Sfull + Srem;
}

int main() {
    Sync;

    ll A, B;
    in A >> B;
    ll ans = pref(B) - pref(A - 1);
    out ans;
    return 0;
}
