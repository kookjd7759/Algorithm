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

    while (1) {
        int h, w; in h >> w;
        if (!h && !w) break;
        vector<string> g(h);
        Fori(h) in g[i];
        string s; in s;

        vector<pair<int, int>> pos(256, {-1, -1});
        Fori(h) Forj(w) if (g[i][j] != '_') pos[(unsigned char)g[i][j]] = {i, j};

        ll ans = 0;
        int r = 0, c = 0;
        for (char ch : s) {
            auto [nr, nc] = pos[(unsigned char)ch];
            ans += abs(r - nr) + abs(c - nc) + 1;
            r = nr, c = nc;
        }
        out ans endl;
    }

    return 0;
}