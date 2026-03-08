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

    int n, m; in n >> m;
    vector<ll> a(n + m);
    Fori(n + m) in a[i];

    int l = n - 1, r = n;
    while (l >= 0 && r < n + m) {
        if (a[l] == a[r]) l--, r++;
        else if (a[l] < a[r]) a[r] -= CeilDiv(a[l] * a[l], a[r]), l--;
        else a[l] -= CeilDiv(a[r] * a[r], a[l]), r++;
    }

    if (l < 0 && r >= n + m) {
        out "stalemate" endl;
        return 0;
    }

    if (r >= n + m) {
        ll sum = 0;
        for (int t = 0; t <= l; ++t) sum += a[t];
        out "coatis" endl;
        out sum endl;
    } else {
        ll sum = 0;
        for (int t = r; t < n + m; ++t) sum += a[t];
        out "owls" endl;
        out sum endl;
    }

    return 0;
}