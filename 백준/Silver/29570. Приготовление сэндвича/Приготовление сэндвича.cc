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

    vector<array<int, 4>> a(4);
    vector<int> xs, ys;
    Fori(4) in a[i][0] >> a[i][1] >> a[i][2] >> a[i][3], xs.push_back(a[i][0]), xs.push_back(a[i][2]), ys.push_back(a[i][1]), ys.push_back(a[i][3]);

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());
    ys.erase(unique(ys.begin(), ys.end()), ys.end());

    ll ans = 0;
    Fori((int)xs.size() - 1) Forj((int)ys.size() - 1) {
        int x1 = xs[i], x2 = xs[i + 1], y1 = ys[j], y2 = ys[j + 1];
        bool ok = false;
        for (auto &r : a) if (r[0] <= x1 && x2 <= r[2] && r[1] <= y1 && y2 <= r[3]) { ok = true; break; }
        if (ok) ans += 1LL * (x2 - x1) * (y2 - y1);
    }

    out ans endl;

    return 0;
}