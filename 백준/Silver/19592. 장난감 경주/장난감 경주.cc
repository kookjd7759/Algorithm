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
    int t; in t;
    while (t--) {
        ll n, x, y; in n >> x >> y;
        vector<ll> v(n);
        Fori(n) in v[i];
        ll my = v[n - 1], mx = 0;
        Fori(n - 1) mx = max(mx, v[i]);
        if (my > mx) { out 0 endl; continue; }
        if (x <= mx) { out -1 endl; continue; }
        ll need = (x * (mx - my) + my * mx) / mx + 1;
        out (need <= y ? need : -1) endl;
    }
    return 0;
}