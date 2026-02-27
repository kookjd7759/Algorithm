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

    int N, M; in N >> M;
    int H = N - 1, W = M - 1, lim = max(H, W);
    ll ans = 0;

    for (int a = -lim; a <= lim; ++a) for (int b = -lim; b <= lim; ++b) {
        if (a == 0 && b == 0) continue;
        if (W == H && ((abs(a) == W && b == 0) || (abs(b) == W && a == 0))) continue;

        int x0 = 0, x1 = a, x2 = -b, x3 = a - b;
        int y0 = 0, y1 = b, y2 = a, y3 = a + b;

        int minx = min(min(x0, x1), min(x2, x3)), maxx = max(max(x0, x1), max(x2, x3));
        int miny = min(min(y0, y1), min(y2, y3)), maxy = max(max(y0, y1), max(y2, y3));

        if (maxx - minx <= W && maxy - miny <= H) {
            ll area = 1LL * a * a + 1LL * b * b;
            if (area > ans) ans = area;
        }
    }

    out ans endl;

    return 0;
}