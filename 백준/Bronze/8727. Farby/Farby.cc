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

    ll c, z, n;  // czerwony, żółty, niebieski
    in c >> z >> n;

    ll p[7];
    For1i(6) in p[i];

    ll needY2 = 2 * p[1] + p[2] + p[6];
    ll needB2 = 2 * p[3] + p[2] + p[4];
    ll needR2 = 2 * p[5] + p[4] + p[6];

    ll haveR2 = 2 * c;
    ll haveY2 = 2 * z;
    ll haveB2 = 2 * n;

    ll buyR2 = max(0LL, needR2 - haveR2);
    ll buyY2 = max(0LL, needY2 - haveY2);
    ll buyB2 = max(0LL, needB2 - haveB2);

    auto printAmount = [&](ll v2) {
        if (v2 == 0) {
            out 0;
        } else if (v2 % 2 == 0) {
            out (v2 / 2);
        } else {
            out (v2 / 2) << ".5";
        }
    };

    printAmount(buyR2);
    out ' ';
    printAmount(buyY2);
    out ' ';
    printAmount(buyB2);
    out "" endl;

    return 0;
}
