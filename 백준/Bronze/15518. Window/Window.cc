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

    ll N, H, W; in N >> H >> W;
    vector<ll> x(N + 1); For1i(N) in x[i];
    vector<pair<ll,ll>> v;
    ll L = N * W;
    For1i(N) {
        ll l = (i - 1) * W, r = i * W;
        if (i & 1) l += x[i], r += x[i];
        else l -= x[i], r -= x[i];
        l = max(0LL, l), r = min(L, r);
        if (l < r) v.push_back({l, r});
    }

    sort(v.begin(), v.end());
    ll covered = 0, cl = -1, cr = -1;
    for (auto [l, r] : v) {
        if (cl == -1) cl = l, cr = r;
        else if (l <= cr) cr = max(cr, r);
        else covered += cr - cl, cl = l, cr = r;
    }
    if (cl != -1) covered += cr - cl;

    out (L - covered) * H endl;
    return 0;
}