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

    ll x1, y1, x2, y2, x3, y3;
    in x1 >> y1;
    in x2 >> y2;
    in x3 >> y3;

    ll lhs = (x2 - x1) * (y3 - y1);
    ll rhs = (y2 - y1) * (x3 - x1);

    if (lhs == rhs) {
        out "WHERE IS MY CHICKEN?";
    } else {
        out "WINNER WINNER CHICKEN DINNER!";
    }

    return 0;
}
