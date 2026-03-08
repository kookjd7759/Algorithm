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

    int wu, n; in wu >> n;
    double sum = 0.0, need = 0.0;
    int wsum = 0;
    bool ok = 1;

    Fori(n) {
        double g; int w; in g >> w;
        if (g < 5.8) ok = 0;
        sum += g * w;
        wsum += w;
    }

    if (!ok) {
        out "IMPOSSIBLE" endl;
        return 0;
    }

    need = (8.0 * (wsum + wu) - sum) / wu;
    need = max(need, 5.8);
    double ans = ceil((need - 1e-12) * 10.0) / 10.0;

    if (ans > 10.0 + 1e-12) out "IMPOSSIBLE" endl;
    else {
        Fixed(1);
        out ans endl;
    }

    return 0;
}