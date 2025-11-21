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

    int M, N, alpha;
    in M >> N >> alpha;

    ll sumP = 0;
    Fori(N) {
        int mi;
        in mi;
        sumP += mi;
    }

    if (alpha >= 1000) {
        out "Impossible" endl;
        return 0;
    }

    long double a = (long double)alpha / 1000.0L;
    long double baseMass = (long double)M + (long double)sumP;
    long double F = a / (1.0L - a) * baseMass;

    Fixed(10);
    out (long double)F endl;

    return 0;
}
