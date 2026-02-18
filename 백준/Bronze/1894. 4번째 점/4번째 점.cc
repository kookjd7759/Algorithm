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

    Fixed(3);

    double x1, y1, x2, y2, x3, y3, x4, y4;
    auto eq = [&](double a, double b) { return fabs(a - b) < 1e-9; };
    auto peq = [&](pair<double,double> a, pair<double,double> b) { return eq(a.first, b.first) && eq(a.second, b.second); };

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        pair<double,double> p0 = {x1, y1}, p1 = {x2, y2}, p2 = {x3, y3}, p3 = {x4, y4};
        double ax, ay;

        if (peq(p0, p1)) ax = p2.first + p3.first - p0.first, ay = p2.second + p3.second - p0.second;
        else if (peq(p0, p2)) ax = p1.first + p3.first - p0.first, ay = p1.second + p3.second - p0.second;
        else if (peq(p0, p3)) ax = p1.first + p2.first - p0.first, ay = p1.second + p2.second - p0.second;
        else if (peq(p1, p2)) ax = p0.first + p3.first - p1.first, ay = p0.second + p3.second - p1.second;
        else if (peq(p1, p3)) ax = p0.first + p2.first - p1.first, ay = p0.second + p2.second - p1.second;
        else ax = p0.first + p1.first - p2.first, ay = p0.second + p1.second - p2.second;

        out ax spc ay endl;
    }

    return 0;
}
