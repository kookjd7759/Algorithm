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

    int n; in n;
    int mn = (int)1e9, mx = -(int)1e9;
    For1i(n) {
        int a; in a;
        int d = a - i;
        mn = min(mn, d);
        mx = max(mx, d);
    }

    int ans;
    if (mn >= 0) ans = mx;
    else if (mx <= 0) ans = -mn;
    else ans = (mx - mn) + min(-mn, mx);

    out ans endl;

    return 0;
}