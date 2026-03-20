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
    Fixed(9);

    double p, a, b, c, d;
    int n; in p >> a >> b >> c >> d >> n;

    auto Price = [&](int k) {
        return p * (sin(a * k + b) + cos(c * k + d) + 2.0);
    };

    double mx = Price(1), ans = 0.0;
    for (int k = 2; k <= n; ++k) {
        double cur = Price(k);
        ans = max(ans, mx - cur);
        mx = max(mx, cur);
    }

    out ans endl;
    return 0;
}