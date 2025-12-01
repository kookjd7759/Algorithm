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
    int t;
    in t;
    while (t--) {
        int a[2][5];
        Fori(5) in a[0][i];
        Fori(5) in a[1][i];

        bool ok = false;
        for (int c1 = 0; c1 < 5 && !ok; ++c1) {
            for (int c2 = 0; c2 < 5; ++c2) {
                if (c1 == c2) continue;
                if (a[0][c1] == a[1][c2]) {
                    ok = true;
                    break;
                }
            }
        }

        if (ok) out "YES\n";
        else out "NO\n";
    }
}
