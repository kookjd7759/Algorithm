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

    int n; double r; in n >> r;
    vector<double> x(n), y(n), z(n);
    Fori(n) in x[i] >> y[i] >> z[i];
    const double PI = acos(-1.0);
    auto Dist = [&](int a, int b) { double dx = x[a] - x[b], dy = y[a] - y[b], dz = z[a] - z[b]; return sqrt(dx * dx + dy * dy + dz * dz); };
    auto Inter = [&](double d) { double t = r - d / 2.0; return (2.0 / 3.0) * PI * t * t * (2.0 * r + d / 2.0); };
    double ans = n * (4.0 * PI * r * r * r / 3.0);
    Fori(n) ans -= Inter(Dist(i, (i + 1) % n));
    Fixed(10); out ans << "\n";

    return 0;
}