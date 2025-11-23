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

    int n, m;
    in n >> m;
    vector<string> g(n);
    Fori(n) in g[i];

    Fori(n) {
        vector<int> seg;
        int cnt = 0;
        Forj(m) {
            if (g[i][j] == '#') {
                ++cnt;
            } else {
                if (cnt > 0) {
                    seg.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        if (cnt > 0) seg.push_back(cnt);
        if (seg.empty()) {
            out 0 endl;
        } else {
            out (int)seg.size();
            Forj((int)seg.size()) out ' ' << seg[j];
            out "" endl;
        }
    }

    ent;

    Forj(m) {
        vector<int> seg;
        int cnt = 0;
        Fori(n) {
            if (g[i][j] == '#') {
                ++cnt;
            } else {
                if (cnt > 0) {
                    seg.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        if (cnt > 0) seg.push_back(cnt);
        if (seg.empty()) {
            out 0 endl;
        } else {
            out (int)seg.size();
            Fori((int)seg.size()) out ' ' << seg[i];
            out "" endl;
        }
    }

    return 0;
}