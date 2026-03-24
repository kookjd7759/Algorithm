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

    int R, C; in R >> C;
    int Rg, Cg, Rp, Cp; in Rg >> Cg >> Rp >> Cp;
    vector<string> s(R); Fori(R) in s[i];

    int gMinR = R, gMaxR = -1, gMinC = C, gMaxC = -1;
    int pMinR = R, pMaxR = -1, pMinC = C, pMaxC = -1;

    Fori(R) Forj(C) {
        if (s[i][j] == 'G') gMinR = min(gMinR, i), gMaxR = max(gMaxR, i), gMinC = min(gMinC, j), gMaxC = max(gMaxC, j);
        if (s[i][j] == 'P') pMinR = min(pMinR, i), pMaxR = max(pMaxR, i), pMinC = min(pMinC, j), pMaxC = max(pMaxC, j);
    }

    vector<pair<int, int>> gPos, pPos;

    for (int r = max(0, gMaxR - Rg + 1); r <= min(gMinR, R - Rg); ++r)
        for (int c = max(0, gMaxC - Cg + 1); c <= min(gMinC, C - Cg); ++c) gPos.push_back({r, c});

    for (int r = max(0, pMaxR - Rp + 1); r <= min(pMinR, R - Rp); ++r)
        for (int c = max(0, pMaxC - Cp + 1); c <= min(pMinC, C - Cp); ++c) pPos.push_back({r, c});

    for (auto [gr, gc] : gPos) {
        for (auto [pr, pc] : pPos) {
            int r1 = max(gr, pr), r2 = min(gr + Rg - 1, pr + Rp - 1);
            int c1 = max(gc, pc), c2 = min(gc + Cg - 1, pc + Cp - 1);
            if (r1 > r2 || c1 > c2) continue;

            bool ok = 1;
            Fori(R) {
                Forj(C) {
                    bool inG = (gr <= i && i < gr + Rg && gc <= j && j < gc + Cg);
                    bool inP = (pr <= i && i < pr + Rp && pc <= j && j < pc + Cp);
                    char ch = inG ? 'G' : (inP ? 'P' : '.');
                    if (s[i][j] != ch) { ok = 0; break; }
                }
                if (!ok) break;
            }
            if (ok) { out 1 endl; return 0; }
        }
    }

    out 0 endl;

    return 0;
}