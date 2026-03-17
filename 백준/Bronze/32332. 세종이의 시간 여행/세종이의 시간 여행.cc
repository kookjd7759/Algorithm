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

ll conv(ll y, ll m, ll d) { return y * 360 + (m - 1) * 30 + (d - 1); }

int main() {
    Sync;
    Fixed(3);

    ll Y0, M0, D0, Y1, M1, D1; double T0, P0, T1, P1;
    in Y0 >> M0 >> D0 >> T0 >> P0;
    in Y1 >> M1 >> D1 >> T1 >> P1;

    ll c = conv(Y0, M0, D0), a = conv(Y1, M1, D1), e = 2 * c - a;
    ll Y = e / 360, rem = e % 360, M = rem / 30 + 1, D = rem % 30 + 1;
    double T = 2.0 * T0 - T1, P = 2.0 * P0 - P1;

    out Y spc M spc D spc T spc P endl;

    return 0;
}