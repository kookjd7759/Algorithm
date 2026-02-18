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

    int n; in n;
    ll w[4] = {4, 6, 4, 10};
    unordered_map<string, ll> mp;
    bool any = false;

    Fori(n) Forj(4) Fork(7) {
        string x; in x;
        if (x != "-") mp[x] += w[j], any = true;
    }

    if (!any) { out "Yes" endl; return 0; }

    ll mn = (1LL<<62), mx = -(1LL<<62);
    for (auto &kv : mp) mn = min(mn, kv.second), mx = max(mx, kv.second);

    out ((mx - mn <= 12) ? "Yes" : "No") endl;

    return 0;
}
