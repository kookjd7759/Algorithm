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
    Fixed(10);

    double x1,y1,x2,y2,x3,y3,x4,y4;
    in x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double ax = x1 - x2, ay = y1 - y2;
    double bx = (x3 - x1) - (x4 - x2);
    double by = (y3 - y1) - (y4 - y2);

    auto f = [&](double t){
        double dx = ax + bx * t, dy = ay + by * t;
        return dx*dx + dy*dy;
    };

    double t = 0.0;
    double denom = bx*bx + by*by;
    if(denom > 0) t = -(ax*bx + ay*by) / denom;

    double best = max(f(0.0), f(1.0));
    if(0.0 <= t && t <= 1.0) best = max(best, f(t));

    out sqrt(best) endl;

    return 0;
}