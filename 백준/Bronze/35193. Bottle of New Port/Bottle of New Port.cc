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

    ll d; in d;

    long double a, o; in a >> o;
    long double da, do_; in da >> do_;
    long double A = a - (long double)d * da;
    long double O = o - (long double)d * do_;

    if (A < 0) A = 0;
    if (O < 0) O = 0;

    long double total = A + O;
    long double pct = (total == 0 ? 0.0L : (A / total) * 100.0L);

    if (pct < 0) pct = 0;
    if (pct > 100) pct = 100;

    Fixed(15);
    out (double)pct endl;

    return 0;
}
