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

int sgn(ll x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

int main() {
    Sync;
    int n; in n;
    vector<ll> a(n);
    Fori(n) in a[i];
    if (n <= 2) { out n; return 0; }
    int ans = 2, cur = 2;
    for (int i = 2; i < n; ++i) {
        int x = sgn(a[i - 1] - a[i - 2]), y = sgn(a[i] - a[i - 1]);
        if (x * y == -1) ++cur;
        else cur = 2;
        ans = max(ans, cur);
    }
    out ans;
    return 0;
}