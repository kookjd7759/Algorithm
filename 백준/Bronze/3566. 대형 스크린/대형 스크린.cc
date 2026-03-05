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

static inline ll cdiv(ll a, ll b){ return (a + b - 1) / b; }

int main() {
    Sync;

    ll RH,RV,SH,SV; in RH >> RV >> SH >> SV;
    int n; in n;
    ll ans = (1LL<<62);

    Fori(n){
        ll rh,rv,sh,sv,p; in rh >> rv >> sh >> sv >> p;
        Forj(2){
            ll a = max(cdiv(RH, rh), cdiv(SH, sh));
            ll b = max(cdiv(RV, rv), cdiv(SV, sv));
            ans = min(ans, a*b*p);
            swap(rh, rv); swap(sh, sv);
        }
    }

    out ans;
    return 0;
}