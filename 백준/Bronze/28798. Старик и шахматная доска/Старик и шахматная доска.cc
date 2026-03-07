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

bool Ok(ll n, ll m, ll x){
    ll need1 = x * x / 2, need2 = x * x - need1;
    if(n > m) swap(n, m);
    return n >= need1 && m >= need2;
}

int main() {
    Sync;

    ll n, m; in n >> m;

    ll l = 1, r = 100000, ans = 0;
    while(l <= r){
        ll mid = (l + r) >> 1;
        if(Ok(n, m, mid)) ans = mid, l = mid + 1;
        else r = mid - 1;
    }

    out ans endl;

    return 0;
}