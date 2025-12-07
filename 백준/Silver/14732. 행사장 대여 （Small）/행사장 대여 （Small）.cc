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

bool grid[501][501];

int main() {
    Sync;

    int N; in N;

    Fori(N) {
        int x1, y1, x2, y2;
        in x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; ++x) {
            for (int y = y1; y < y2; ++y) {
                grid[x][y] = true;
            }
        }
    }

    int area = 0;
    for (int x = 0; x < 500; ++x) {
        for (int y = 0; y < 500; ++y) {
            if (grid[x][y]) ++area;
        }
    }

    out area;

    return 0;
}
