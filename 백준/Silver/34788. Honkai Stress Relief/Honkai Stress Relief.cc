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

    int n, a, b;
    in n >> a >> b;
    long double lenAB = (long double)(b - a);
    long double probAllRelaxed = 1.0L;
    Fori(n) {
        int s, e;
        in s >> e;
        int L = max(a, s);
        int R = min(b, e);
        long double inter = 0.0L;
        if (L < R) inter = (long double)(R - L);
        long double pRelax = inter / lenAB;
        probAllRelaxed *= pRelax;
    }
    long double ans = 1.0L - probAllRelaxed;
    Fixed(10);
    out (long double)ans;
    return 0;
}
