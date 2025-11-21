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

    int n, d, k;
    in n >> d >> k;

    int x = 0, y = 0;
    int dir = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    set<pair<int,int>> vis;
    vis.insert({x, y});

    int rem = n;

    int minx = x, maxx = x, miny = y, maxy = y;

    while (rem > 0) {
        for (int seg = 0; seg < 2 && rem > 0; ++seg) {
            int len = d;
            for (int i = 0; i < len && rem > 0; ++i) {
                x += dx[dir];
                y += dy[dir];
                --rem;
                vis.insert({x, y});
                if (x < minx) minx = x;
                if (x > maxx) maxx = x;
                if (y < miny) miny = y;
                if (y > maxy) maxy = y;
            }
            if (rem == 0) break;
            dir = (dir + 1) % 4;
        }
        if (rem == 0) break;
        d *= k;
    }

    int h = maxy - miny + 1;
    int w = maxx - minx + 1;

    out h spc w endl;

    for (int yy = maxy; yy >= miny; --yy) {
        for (int xx = minx; xx <= maxx; ++xx) {
            if (vis.count({xx, yy})) out '*';
            else out '.';
        }
        ent;
    }

    return 0;
}
