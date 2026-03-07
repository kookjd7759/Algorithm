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

    int n; ll g, r; in n >> g >> r;
    vector<ll> a(n); Fori(n) in a[i];

    ll T = g + r, cur = a[0];

    for(int i = 1; i < n; ++i){
        ll k = cur / T, gs = k * T, ge = gs + g;
        if(cur + a[i] <= ge) cur += a[i];
        else cur = (k + 1) * T + a[i];
    }

    out cur endl;

    return 0;
}