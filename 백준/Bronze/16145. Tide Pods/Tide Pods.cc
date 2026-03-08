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
        int t, n; in t >> n;
        vector<pair<int,int>> v(n);
        Forj(n) {
            int mask = 0, x;
            Fork(t) in x, mask |= (x << k);
            int s; in s;
            v[j] = {mask, s};
        }

        int me = 0, x;
        Forj(t) in x, me |= (x << j);

        ll mn = (ll)4e18, mx = -(ll)4e18;
        Forj(n) {
            int common = __builtin_popcount((unsigned)(v[j].first & me));
            ll score = 1LL * common * v[j].second;
            mn = min(mn, score);
            mx = max(mx, score);
        }

        out "Data Set " << i << ":" << '\n';
        out mx - mn << '\n' << '\n';
    }

    return 0;
}