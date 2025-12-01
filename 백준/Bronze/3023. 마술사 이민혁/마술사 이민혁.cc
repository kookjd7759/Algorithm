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
    int R, C;
    in R >> C;
    vector<string> tl(R);
    Fori(R) in tl[i];
    int H = 2 * R, W = 2 * C;
    vector<string> g(H, string(W, '.'));
    Fori(R) {
        Forj(C) {
            char ch = tl[i][j];
            g[i][j] = ch;
            g[i][W - 1 - j] = ch;
            g[H - 1 - i][j] = ch;
            g[H - 1 - i][W - 1 - j] = ch;
        }
    }
    int A, B;
    in A >> B;
    int r = A - 1, c = B - 1;
    g[r][c] = (g[r][c] == '#') ? '.' : '#';
    Fori(H) {
        out g[i] << "\n";
    }
}
