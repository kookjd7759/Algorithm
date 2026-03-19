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

struct RGB {
    int r, g, b;
};

int main() {
    Sync;

    vector<RGB> base(16);
    Fori(16) in base[i].r >> base[i].g >> base[i].b;

    while (1) {
        RGB cur; in cur.r >> cur.g >> cur.b;
        if (cur.r == -1 && cur.g == -1 && cur.b == -1) break;

        ll mn = (1LL << 62);
        RGB ans = base[0];
        Fori(16) {
            ll dr = cur.r - base[i].r, dg = cur.g - base[i].g, db = cur.b - base[i].b;
            ll dist = dr * dr + dg * dg + db * db;
            if (dist < mn) mn = dist, ans = base[i];
        }

        out "(" << cur.r << "," << cur.g << "," << cur.b << ") maps to (" << ans.r << "," << ans.g << "," << ans.b << ")" endl;
    }

    return 0;
}