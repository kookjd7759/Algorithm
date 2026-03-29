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

double diff(double a, double b) {
    double d = fabs(a - b);
    return min(d, 360.0 - d);
}

int main() {
    Sync;
    Fixed(10);
    int t; in t;
    while (t--) {
        double h, m, s; in h >> m >> s;
        double ha = h * 30.0 + m * 0.5 + s / 120.0;
        double ma = m * 6.0 + s * 0.1;
        double sa = s * 6.0;
        out min({diff(ha, ma), diff(ma, sa), diff(sa, ha)}) endl;
    }
    return 0;
}