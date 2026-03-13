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
    while (1) {
        int N; in N;
        if (!N) break;
        vector<ll> a(N);
        Fori(N) in a[i];
        ll x, y; in x >> y;
        ll v = 0;
        for (int i = N - 1; i >= 0; --i) v = v * x + a[i];
        if (y < v) out "Inside" endl;
        else if (y == v) out "On" endl;
        else out "Outside" endl;
    }
    return 0;
}