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

    int T; in T;
    For1i(T) {
        int M; in M;
        vector<int> p(13);
        For1j(12) in p[j];
        ll best = -1;
        int bi = -1, si = -1, bp = (int)1e9;
        for (int b = 1; b <= 11; ++b) for (int s = b + 1; s <= 12; ++s) {
            if (p[s] <= p[b]) continue;
            ll cnt = M / p[b], profit = cnt * (p[s] - p[b]);
            if (profit > best || (profit == best && p[b] < bp) || (profit == best && p[b] == bp && (b < bi || (b == bi && s < si)))) best = profit, bi = b, si = s, bp = p[b];
        }
        out "Case #" << i << ": ";
        if (best <= 0) out "IMPOSSIBLE" endl;
        else out bi spc si spc best endl;
    }

    return 0;
}