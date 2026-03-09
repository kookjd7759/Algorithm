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

pair<ll,ll> Solve(ll t, ll v, ll x){
    ll d = t * v;
    ll q = x / d, r = x % d;
    if(r == 0) return {(2 * q - 1) * t, 1};
    return {2 * q * t * v + r, v};
}

int main() {
    Sync;

    ll t1, v1, t2, v2, x; in t1 >> v1 >> t2 >> v2; in x;

    auto a = Solve(t1, v1, x), b = Solve(t2, v2, x);
    __int128 lhs = (__int128)a.first * b.second;
    __int128 rhs = (__int128)b.first * a.second;

    if(lhs < rhs) out "First";
    else if(lhs > rhs) out "Second";
    else out "Draw";

    return 0;
}