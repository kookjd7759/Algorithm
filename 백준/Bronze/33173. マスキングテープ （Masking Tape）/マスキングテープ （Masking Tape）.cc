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

    int H, W, Q;
    in H >> W >> Q;

    vector<vector<ll>> color(H, vector<ll>(W, 0));
    vector<vector<char>> masked(H, vector<char>(W, 0));

    Fori(Q) {
        int q;
        in q;
        if (q == 1) {
            int x, y;
            ll c;
            in x >> y >> c;
            --x; --y;
            for (int dx = 0; dx <= 1; ++dx) {
                for (int dy = 0; dy <= 1; ++dy) {
                    int i2 = x + dx;
                    int j2 = y + dy;
                    if (!masked[i2][j2]) {
                        color[i2][j2] = c;
                    }
                }
            }
        } else { // q == 2
            int x, y;
            in x >> y;
            --x; --y;
            for (int dx = 0; dx <= 1; ++dx) {
                for (int dy = 0; dy <= 1; ++dy) {
                    int i2 = x + dx;
                    int j2 = y + dy;
                    masked[i2][j2] = 1;
                }
            }
        }
    }

    Fori(H) {
        for (int j = 0; j < W; ++j) {
            if (j) cout << ' ';
            out color[i][j];
        }
        out "" endl;
    }

    return 0;
}
