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
    vector<string> g(R);
    Fori(R) in g[i];

    int cnt[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < R - 1; ++i) {
        for (int j = 0; j < C - 1; ++j) {
            char a = g[i][j];
            char b = g[i][j + 1];
            char c = g[i + 1][j];
            char d = g[i + 1][j + 1];
            if (a == '#' || b == '#' || c == '#' || d == '#') continue;
            int x = 0;
            if (a == 'X') ++x;
            if (b == 'X') ++x;
            if (c == 'X') ++x;
            if (d == 'X') ++x;
            ++cnt[x];
        }
    }

    Fori(5) out cnt[i] << "\n";
}
