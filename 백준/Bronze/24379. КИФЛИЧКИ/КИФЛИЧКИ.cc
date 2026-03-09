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

    ll p[3], c[3], m; 
    Fori(3) in p[i];
    Fori(3) in c[i];
    in m;

    vector<pair<ll,ll>> v;
    Fori(3) v.push_back({p[i], c[i]});
    sort(v.begin(), v.end());

    ll ans = 0;

    Fori(3){
        ll price = v[i].first, cnt = v[i].second;
        if(price == 0){ ans += cnt; continue; }
        ll buy = min(cnt, m / price);
        ans += buy;
        m -= buy * price;
    }

    out ans;

    return 0;
}