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
    vector<ll> X(N + 1, 0);
    for (int i = 2; i <= N; ++i) in X[i];

    if (N < 4) { out 0 endl; return 0; }

    ll best = (1LL<<62); int bp = -1, bq = -1;
    for (int p = 3; p <= N - 1; ++p) {
        ll diff = X[p] - X[p - 1];
        if (diff < best) best = diff, bp = p, bq = p - 1;
    }

    out (X[N] + best) endl;
    out bp spc 1 spc N spc bq endl;

    return 0;
}
