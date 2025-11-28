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
    int r, g, b;
    int cr, cg, cb;
    int crg, cgb;
    in r >> g >> b;
    in cr >> cg >> cb;
    in crg >> cgb;

    int needR = max(0, r - cr);
    int needG = max(0, g - cg);
    int needB = max(0, b - cb);

    int Tmin = needR + needG + needB;
    int Tmax = crg + cgb;

    if (Tmin == 0) {
        out 0;
        return 0;
    }

    if (Tmin > Tmax) {
        out -1;
        return 0;
    }

    for (int T = Tmin; T <= Tmax; ++T) {
        int L = max(needR, T - cgb);
        int R = min(crg, T - needB);
        if (L <= R) {
            out T;
            return 0;
        }
    }

    out -1;
}
