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
    int tc; in tc;
    while (tc--) {
        int m; in m;
        vector<ll> L(m), R(m);
        unordered_set<ll> sL, sR, eL, eR;
        sL.reserve(m * 2 + 10); sR.reserve(m * 2 + 10);
        Fori(m) in L[i], sL.insert(L[i]);
        Fori(m) in R[i], sR.insert(R[i]);
        vector<pair<ll, int>> v;
        for (ll x : L) if (!sL.count(x - 500)) v.push_back({x, 0});
        for (ll x : R) if (!sR.count(x - 500)) v.push_back({x, 1});
        sort(v.begin(), v.end());
        ll ans = 0;
        eL.reserve(v.size() * 2 + 10); eR.reserve(v.size() * 2 + 10);
        for (auto [t, d] : v) {
            if (!d) {
                if (eL.count(t)) eL.erase(t);
                else ++ans, eR.insert(t + 1000);
            } else {
                if (eR.count(t)) eR.erase(t);
                else eL.insert(t + 1000);
            }
        }
        out ans endl;
    }
    return 0;
}