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

struct C {
    int r, g, b;
};

int main() {
    Sync;

    vector<C> t(16);
    Fori(16) in t[i].r >> t[i].g >> t[i].b;

    C x;
    while (in x.r >> x.g >> x.b) {
        int idx = 0;
        ll best = (1LL << 62);
        Fori(16) {
            ll dr = x.r - t[i].r, dg = x.g - t[i].g, db = x.b - t[i].b;
            ll d = dr * dr + dg * dg + db * db;
            if (d < best) best = d, idx = i;
        }
        out setw(3) << x.r << " " << setw(3) << x.g << " " << setw(3) << x.b;
        out " maps to ";
        out setw(3) << t[idx].r << " " << setw(3) << t[idx].g << " " << setw(3) << t[idx].b endl;
    }

    return 0;
}