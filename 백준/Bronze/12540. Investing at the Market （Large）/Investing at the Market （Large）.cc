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
        ll M; in M;
        vector<ll> p(13);
        For1j(12) in p[j];
        ll bestProfit = -1, bestBuy = -1, bestSell = -1, bestPrice = (1LL << 60);
        For1j(11) for (int k = j + 1; k <= 12; ++k) {
            ll cnt = M / p[j], profit = cnt * (p[k] - p[j]);
            if (profit > bestProfit && profit > 0) bestProfit = profit, bestBuy = j, bestSell = k, bestPrice = p[j];
            else if (profit == bestProfit && profit > 0 && p[j] < bestPrice) bestBuy = j, bestSell = k, bestPrice = p[j];
        }
        out "Case #" << i << ": ";
        if (bestProfit <= 0) out "IMPOSSIBLE\n";
        else out bestBuy spc bestSell spc bestProfit << "\n";
    }

    return 0;
}