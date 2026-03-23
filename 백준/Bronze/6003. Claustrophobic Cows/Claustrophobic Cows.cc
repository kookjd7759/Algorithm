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

    int N; in N;
    vector<ll> x(N + 1), y(N + 1);
    For1i(N) in x[i] >> y[i];

    ll best = (1LL << 62);
    int a = 1, b = 2;
    For1i(N) for (int j = i + 1; j <= N; ++j) {
        ll dx = x[i] - x[j], dy = y[i] - y[j], d = dx * dx + dy * dy;
        if (d < best) best = d, a = i, b = j;
    }

    out a spc b endl;

    return 0;
}