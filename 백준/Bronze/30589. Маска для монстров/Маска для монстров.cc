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
    Fixed(6);

    int N; in N;
    vector<pair<ll, ll>> p(N);
    Fori(N) in p[i].first >> p[i].second;

    long double sum = 0, mx = 0;
    Fori(N) {
        ll x1 = p[i].first, y1 = p[i].second;
        ll x2 = p[(i + 1) % N].first, y2 = p[(i + 1) % N].second;
        long double d = sqrt((long double)(x1 - x2) * (x1 - x2) + (long double)(y1 - y2) * (y1 - y2));
        sum += d;
        mx = max(mx, d);
    }

    out (double)(sum - mx) endl;

    return 0;
}