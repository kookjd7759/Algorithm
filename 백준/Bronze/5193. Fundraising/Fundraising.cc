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

    int K; in K;
    For1i(K) {
        int c, d, t; in c >> d >> t;
        vector<ll> sum(d + 1, 0);
        unordered_map<ll, ll> mp;
        vector<int> bad(d + 1, 0);

        Forj(t) {
            int di, ci, mi; in di >> ci >> mi;
            sum[di] += mi;
            if (sum[di] > 40000) bad[di] = 1;
            ll key = 1LL * di * 1000000LL + ci;
            mp[key] += mi;
            if (mp[key] > 2100) bad[di] = 1;
        }

        out "Data Set " << i << ":" endl;
        bool ok = false;
        For1j(d) if (bad[j]) ok = true;
        if (!ok) out "No violations" endl;
        else {
            out "Violators:" endl;
            For1j(d) if (bad[j]) out j endl;
        }
    }

    return 0;
}