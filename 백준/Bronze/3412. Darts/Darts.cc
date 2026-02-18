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

    int T; in T;
    int r2[11];
    For1i(10) { int r = 20 * i; r2[i] = r * r; }
    while (T--) {
        int n; in n;
        ll ans = 0;
        Fori(n) {
            int x, y; in x >> y;
            int d = x * x + y * y;
            if (d > r2[10]) continue;
            int k = 1;
            while (k <= 10 && d > r2[k]) k++;
            ans += 11 - k;
        }
        out ans endl;
    }

    return 0;
}
