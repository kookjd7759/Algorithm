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

    int cash; in cash;
    vector<int> p(14); Fori(14) in p[i];

    int c1 = cash, s1 = 0;
    Fori(14) {
        int buy = c1 / p[i];
        if (buy > 0) { s1 += buy; c1 -= buy * p[i]; }
    }
    int asset1 = c1 + s1 * p[13];

    int c2 = cash, s2 = 0, up = 0, down = 0;
    for (int i = 0; i < 14; ++i) {
        if (i > 0) {
            if (p[i] > p[i-1]) { up++; down = 0; }
            else if (p[i] < p[i-1]) { down++; up = 0; }
            else { up = down = 0; }
        }
        if (down >= 3) {
            int buy = c2 / p[i];
            if (buy > 0) { s2 += buy; c2 -= buy * p[i]; }
        } else if (up >= 3) {
            if (s2 > 0) { c2 += s2 * p[i]; s2 = 0; }
        }
    }
    int asset2 = c2 + s2 * p[13];

    if (asset1 > asset2) out "BNP\n";
    else if (asset1 < asset2) out "TIMING\n";
    else out "SAMESAME\n";
}
