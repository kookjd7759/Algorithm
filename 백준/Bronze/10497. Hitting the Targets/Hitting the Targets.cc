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

struct Target {
    int t, a, b, c, d;
};

int main() {
    Sync;

    int m; in m;
    vector<Target> v(m);
    Fori(m) {
        string s; in s;
        if (s == "rectangle") {
            v[i].t = 0;
            in v[i].a >> v[i].b >> v[i].c >> v[i].d;
        } else {
            v[i].t = 1;
            in v[i].a >> v[i].b >> v[i].c;
        }
    }
    int n; in n;
    Fori(n) {
        ll x, y; in x >> y;
        int ans = 0;
        for (auto &e : v) {
            if (!e.t) {
                if (e.a <= x && x <= e.c && e.b <= y && y <= e.d) ++ans;
            } else {
                ll dx = x - e.a, dy = y - e.b, r = e.c;
                if (dx * dx + dy * dy <= r * r) ++ans;
            }
        }
        out ans << "\n";
    }

    return 0;
}