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

    int n;
    while(in n && n) {
        ll lx = -4e18, ly = -4e18, lz = -4e18;
        ll rx = 4e18, ry = 4e18, rz = 4e18;

        Fori(n) {
            ll x, y, z, d; in x >> y >> z >> d;
            lx = max(lx, x);
            ly = max(ly, y);
            lz = max(lz, z);
            rx = min(rx, x + d);
            ry = min(ry, y + d);
            rz = min(rz, z + d);
        }

        ll dx = max(0LL, rx - lx), dy = max(0LL, ry - ly), dz = max(0LL, rz - lz);
        out dx * dy * dz endl;
    }

    return 0;
}