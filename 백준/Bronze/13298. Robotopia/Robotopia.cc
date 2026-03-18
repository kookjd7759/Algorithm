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
    while (n--) {
        ll l1, a1, l2, a2, lt, at; in l1 >> a1 >> l2 >> a2 >> lt >> at;
        ll det = l1 * a2 - l2 * a1;
        if (det != 0) {
            ll xn = lt * a2 - l2 * at, yn = l1 * at - lt * a1;
            if (xn % det || yn % det) out "?\n";
            else {
                ll x = xn / det, y = yn / det;
                if (x > 0 && y > 0) out x spc y endl;
                else out "?\n";
            }
        } else {
            if (l1 * at != a1 * lt || l2 * at != a2 * lt) {
                out "?\n";
                continue;
            }
            ll cx = -1, cy = -1, cnt = 0;
            for (ll x = 1; x * l1 < lt; ++x) {
                ll rem = lt - x * l1;
                if (rem <= 0 || rem % l2) continue;
                ll y = rem / l2;
                if (y <= 0) continue;
                cnt++;
                cx = x; cy = y;
                if (cnt > 1) break;
            }
            if (cnt == 1) out cx spc cy endl;
            else out "?\n";
        }
    }

    return 0;
}