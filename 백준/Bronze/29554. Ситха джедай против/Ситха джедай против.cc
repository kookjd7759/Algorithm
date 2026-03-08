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

ll CeilDiv(ll a, ll b) {
    return (a + b - 1) / b;
}

int main() {
    Sync;

    int n; in n;
    vector<ll> j(n), l(n), s(n), d(n);
    Fori(n) in j[i];
    Fori(n) in l[i];
    Fori(n) in s[i];
    Fori(n) in d[i];

    ll lo = 0, hi = (ll)4e18;

    Fori(n) {
        ll delta = l[i] - d[i], need = s[i] - j[i];
        if (delta > 0) {
            if (need > 0) lo = max(lo, CeilDiv(need, delta));
        } else if (delta == 0) {
            if (need > 0) {
                out "Strong is dark side of the force." endl;
                return 0;
            }
        } else {
            if (j[i] < s[i]) {
                out "Strong is dark side of the force." endl;
                return 0;
            }
            hi = min(hi, (j[i] - s[i]) / (d[i] - l[i]));
        }
    }

    if (lo <= hi) out lo endl;
    else out "Strong is dark side of the force." endl;

    return 0;
}