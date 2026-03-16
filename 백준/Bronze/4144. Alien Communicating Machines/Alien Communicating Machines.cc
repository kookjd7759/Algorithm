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
    while (T--) {
        ll x, y, val = 0; string z; in x >> y >> z;
        for (char c : z) val = val * x + (isdigit(c) ? c - '0' : c - 'A' + 10);
        if (!val) {
            out 0 endl;
            continue;
        }
        string ans;
        while (val) {
            int r = val % y;
            ans += (r < 10 ? char('0' + r) : char('A' + r - 10));
            val /= y;
        }
        reverse(ans.begin(), ans.end());
        out ans endl;
    }

    return 0;
}