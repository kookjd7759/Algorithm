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
    vector<string> g(4); Fori(4) in g[i];
    string m; in m; sort(m.begin(), m.end());
    Fori(4) for (int j = 0; j < 10; ++j) if (1 <= i && i <= 2 && 1 <= j && j <= 8) {
        string t; t.reserve(9);
        for (int r = i - 1; r <= i + 1; ++r) for (int c = j - 1; c <= j + 1; ++c) t.push_back(g[r][c]);
        sort(t.begin(), t.end());
        if (t == m) { out g[i][j] endl; return 0; }
    }
    return 0;
}