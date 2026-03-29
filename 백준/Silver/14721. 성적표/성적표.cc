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
    int n; in n;
    vector<ll> x(n), y(n);
    Fori(n) in x[i] >> y[i];
    ll best = (1LL << 62), ra = 1, rb = 1;
    For1i(100) For1j(100) {
        ll cur = 0;
        Fork(n) {
            ll d = y[k] - (1LL * i * x[k] + j);
            cur += d * d;
        }
        if (cur < best) best = cur, ra = i, rb = j;
    }
    out ra spc rb;
    return 0;
}