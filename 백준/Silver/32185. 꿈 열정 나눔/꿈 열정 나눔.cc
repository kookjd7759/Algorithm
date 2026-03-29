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
    int n, m; in n >> m;
    ll v, p, s; in v >> p >> s;
    ll sum0 = v + p + s;
    vector<pair<ll, int>> a;
    a.reserve(n);
    For1i(n) {
        in v >> p >> s;
        ll sum = v + p + s;
        if (sum <= sum0) a.push_back({-sum, i});
    }
    sort(a.begin(), a.end());
    vector<int> ans = {0};
    for (int i = 0; i < min((int)a.size(), m - 1); ++i) ans.push_back(a[i].second);
    Fori((int)ans.size()) out ans[i] << (i + 1 == (int)ans.size() ? "" : " ");
    return 0;
}