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

ll conv(int h, int m, int s, int u) {
    return 1LL * h * 60 * 60 * 100 + 1LL * m * 60 * 100 + 1LL * s * 100 + u;
}

int main() {
    Sync;
    Fixed(3);

    int D; in D;
    const long double PI = acosl(-1.0L), T = 12.0L * 60 * 60 * 100;
    For1i(D) {
        int h1, m1, s1, u1, h2, m2, s2, u2; in h1 >> m1 >> s1 >> u1; in h2 >> m2 >> s2 >> u2;
        long double r; in r;
        long double dt = (long double)(conv(h2, m2, s2, u2) - conv(h1, m1, s1, u1));
        long double theta = 2.0L * PI * dt / T;
        long double area = 0.5L * r * r * theta;
        out i << ". " << area << "\n";
    }

    return 0;
}