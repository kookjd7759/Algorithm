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

    int Q; in Q;
    int pass[6] = { 0,100,90,95,90,80 };
    Fori(Q) {
        int g, l, r, h; in g >> l >> r >> h;
        if (!(g == 1 || g == 2) || h < 50) { out "NO\n"; continue; }
        int P = pass[g];
        bool a1 = (P > 3 * l);
        bool a2 = (P > 3 * r);
        bool b1 = (l <= 21);
        bool b2 = (r <= 21);
        if ((a1 && a2) || (b1 || b2)) out "YES\n";
        else out "NO\n";
    }
}
