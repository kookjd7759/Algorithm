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
    unordered_map<string, ll> mp;
    int t[4] = {4, 6, 4, 10};
    Fori(n) Forj(4) Fork(7) {
        string s; in s;
        if (s != "-") mp[s] += t[j];
    }
    if (mp.empty()) {
        out "Yes";
        return 0;
    }
    ll mn = (ll)4e18, mx = 0;
    for (auto &p : mp) mn = min(mn, p.second), mx = max(mx, p.second);
    out (mx - mn <= 12 ? "Yes" : "No");
    return 0;
}