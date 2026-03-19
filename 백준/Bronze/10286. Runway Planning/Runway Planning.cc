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

    int t; in t;
    Fori(t) {
        int h; in h;
        int a = (h + 5) / 10 % 36, b = (a + 18) % 36;
        if (!a) a = 36;
        if (!b) b = 36;
        a = (a - 1) % 18 + 1;
        b = (b - 1) % 18 + 1;
        int ans = min(a, b);
        if (!ans) ans = 18;
        if (ans < 10) out '0';
        out ans << "\n";
    }

    return 0;
}