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

    int X, Y;
    ll Z;
    in X >> Y;
    in Z;

    ll p10[19];
    p10[0] = 1;
    For1i(18) p10[i] = p10[i - 1] * 10;

    auto getRange = [&](int d) -> pair<ll, ll> {
        if (d == 1) return { 0, 9 };
        return { p10[d - 1], p10[d] - 1 };
        };

    auto r1 = getRange(X);
    auto r2 = getRange(Y);

    ll L1 = r1.first, R1 = r1.second;
    ll L2 = r2.first, R2 = r2.second;

    ll ans;
    if (X != Y) {
        ll L = max(L1, Z - R2);
        ll R = min(R1, Z - L2);
        if (L > R) ans = 0;
        else ans = R - L + 1;
    }
    else {
        ll L = max(L1, Z - R1);
        ll R = min(R1, Z - L1);
        ll ordered = 0;
        if (L <= R) ordered = R - L + 1;
        ll same = 0;
        if (Z % 2 == 0) {
            ll a = Z / 2;
            if (a >= L1 && a <= R1) same = 1;
        }
        ans = (ordered + same) / 2;
    }

    out ans;
}
