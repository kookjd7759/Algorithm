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
    int n, r; in n >> r;
    vector<pair<int, int>> a(n);
    int mnx = 1e9, mxx = -1e9, mny = 1e9, mxy = -1e9;
    Fori(n) {
        in a[i].first >> a[i].second;
        mnx = min(mnx, a[i].first); mxx = max(mxx, a[i].first);
        mny = min(mny, a[i].second); mxy = max(mxy, a[i].second);
    }
    int bx = mnx, by = mny, best = -1;
    ll rr = 1LL * r * r;
    for (int x = mnx - r; x <= mxx + r; ++x) {
        for (int y = mny - r; y <= mxy + r; ++y) {
            int cnt = 0;
            for (auto &[px, py] : a) {
                ll dx = x - px, dy = y - py;
                if (dx * dx + dy * dy <= rr) ++cnt;
            }
            if (cnt > best) best = cnt, bx = x, by = y;
        }
    }
    out bx spc by;
    return 0;
}