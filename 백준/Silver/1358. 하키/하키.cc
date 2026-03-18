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

    int W, H, X, Y, P; in W >> H >> X >> Y >> P;
    int R = H / 2, ans = 0;
    int cx1 = X, cy = Y + R, cx2 = X + W;
    Fori(P) {
        int x, y; in x >> y;
        bool ok = false;
        if (X <= x && x <= X + W && Y <= y && y <= Y + H) ok = true;
        ll d1 = 1LL * (x - cx1) * (x - cx1) + 1LL * (y - cy) * (y - cy);
        ll d2 = 1LL * (x - cx2) * (x - cx2) + 1LL * (y - cy) * (y - cy);
        if (d1 <= 1LL * R * R || d2 <= 1LL * R * R) ok = true;
        if (ok) ++ans;
    }
    out ans endl;

    return 0;
}