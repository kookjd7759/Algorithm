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
    vector<ll> x(n);
    Fori(n) in x[i];
    sort(x.begin(), x.end());

    vector<vector<ll>> cost(n, vector<ll>(n, 0));
    Fori(n) for (int j = i; j < n; ++j) {
        ll best = (1LL << 62);
        for (int k = i; k <= j; ++k) {
            ll cur = 0;
            for (int t = i; t <= j; ++t) cur += (x[t] - x[k]) * (x[t] - x[k]);
            best = min(best, cur);
        }
        cost[i][j] = best;
    }

    ll ans = (1LL << 62);
    for (int s = 0; s < n - 1; ++s) ans = min(ans, cost[0][s] + cost[s + 1][n - 1]);

    out ans endl;

    return 0;
}