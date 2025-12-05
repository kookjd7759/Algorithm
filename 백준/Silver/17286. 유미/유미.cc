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

    vector<pair<long double, long double>> p(4);
    Fori(4) in p[i].first >> p[i].second;

    vector<int> idx = {1, 2, 3};
    long double best = 1e18;

    do {
        long double cur = 0;
        cur += hypotl(p[0].first - p[idx[0]].first, p[0].second - p[idx[0]].second);
        cur += hypotl(p[idx[0]].first - p[idx[1]].first, p[idx[0]].second - p[idx[1]].second);
        cur += hypotl(p[idx[1]].first - p[idx[2]].first, p[idx[1]].second - p[idx[2]].second);
        if (cur < best) best = cur;
    } while (next_permutation(idx.begin(), idx.end()));

    ll ans = (ll)best;
    out ans;

    return 0;
}
