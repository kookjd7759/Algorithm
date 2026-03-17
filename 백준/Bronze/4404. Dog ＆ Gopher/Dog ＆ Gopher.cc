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
    Fixed(3);

    double gx, gy, dx, dy; 
    if (!(cin >> gx >> gy >> dx >> dy)) return 0;

    double hx, hy;
    while (cin >> hx >> hy) {
        double gd = (hx - gx) * (hx - gx) + (hy - gy) * (hy - gy);
        double dd = (hx - dx) * (hx - dx) + (hy - dy) * (hy - dy);
        if (dd + 1e-12 >= 4.0 * gd) {
            out "The gopher can escape through the hole at (" << hx << "," << hy << ").\n";
            return 0;
        }
    }

    out "The gopher cannot escape.\n";
    return 0;
}