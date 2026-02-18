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

    ll a, b, c; in a >> b >> c;
    if (b >= a || c >= a) { out -1 endl; return 0; }
    ll p = a * a - b * b;
    ll ans = -1;
    For1i((int)a - 1) {
        ll x = i, q = a * a - x * x, lhs = p * q, rhs = (a * c + b * x); rhs *= rhs;
        if (lhs == rhs) { ans = x; break; }
    }
    out ans endl;

    return 0;
}
