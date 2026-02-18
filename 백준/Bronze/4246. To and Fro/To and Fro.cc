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

    int c;
    while (1) {
        in c;
        if (!cin) return 0;
        if (c == 0) break;
        string s; in s;
        int L = (int)s.size(), r = L / c;
        vector<string> g(r, string(c, ' '));
        int idx = 0;
        Fori(r) {
            if ((i & 1) == 0) Forj(c) g[i][j] = s[idx++];
            else for (int j = c - 1; j >= 0; --j) g[i][j] = s[idx++];
        }
        string ans = "";
        Forj(c) Fori(r) ans.push_back(g[i][j]);
        out ans endl;
    }

    return 0;
}
