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

    ll N, Mlim, Plim; in N >> Mlim >> Plim;
    if (Plim < N) return 0;

    ll bp = -1, bq = -1, bM = (1LL << 62), bTot = (1LL << 62);

    if (N * N <= Mlim && 2 * N <= 500000) bp = N, bq = N, bM = N * N, bTot = 2 * N;

    for (ll p = 1; p <= N; ++p) {
        ll A = (N + p - 1) / p;
        ll maxB = Plim / A;
        if (maxB <= 0) continue;
        ll q = (N + maxB - 1) / maxB;
        ll M = N * (p + q), Tot = 2 * N + p * q;
        if (M > Mlim || Tot > 500000) continue;
        if (M < bM || (M == bM && Tot < bTot)) bp = p, bq = q, bM = M, bTot = Tot;
    }

    if (bp == -1) return 0;

    if (bp == N && bq == N && bM == N * N && bTot == 2 * N) {
        out bTot spc bM endl;
        For1i((int)N) For1j((int)N) out i spc (N + j) endl;
        return 0;
    }

    int p = (int)bp, q = (int)bq;
    vector<vector<int>> gin(p), gout(q);

    int cur = 1, base = N / p, rem = N % p;
    Fori(p) {
        int sz = base + (i < rem);
        gin[i].reserve(sz);
        Forj(sz) gin[i].push_back(cur++);
    }

    cur = (int)N + 1, base = N / q, rem = N % q;
    Fori(q) {
        int sz = base + (i < rem);
        gout[i].reserve(sz);
        Forj(sz) gout[i].push_back(cur++);
    }

    out (2 * N + 1LL * p * q) spc (N * 1LL * (p + q)) endl;

    ll id0 = 2 * N + 1;
    Fori(p) Forj(q) {
        ll id = id0 + 1LL * i * q + j;
        for (int x : gin[i]) out x spc id endl;
        for (int y : gout[j]) out id spc y endl;
    }

    return 0;
}