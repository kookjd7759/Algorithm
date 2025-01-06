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

    int n, a, b; in n >> a >> b;
    int* st = new int[n]; Fori(n) in st[i];
    int* sh = new int[n]; Fori(n) in sh[i];
    int* ans = new int[n];
    int def(a - b);
    Fori(n) {
        int def_now(sh[i] - st[i]);
        if ((def == 0 && def_now != 0) ||
            (def < 0 && def_now > 0) ||
            (def > 0 && def_now < 0)) {
            out "NO";
            return 0;
        }
        if (def == 0) ans[i] = 0;
        else {
            ans[i] = def_now / def;
            if (def_now % def) {
                out "NO";
                return 0;
            }
        }
    }
    out "YES" endl;
    Fori(n) out ans[i] << ' ';
}