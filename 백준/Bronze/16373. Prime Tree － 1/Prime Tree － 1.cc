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
    while (T--) {
        int n; in n;
        vector<pair<int,int>> e;
        Fori(n - 1) {
            int u, v; in u >> v;
            e.push_back({u - 1, v - 1});
        }

        vector<int> p(n), ans(n);
        iota(p.begin(), p.end(), 1);
        int best = 1e9;

        do {
            int cur = 0;
            for (auto &x : e) if (gcd(p[x.first], p[x.second]) > 1) cur++;
            if (cur < best) {
                best = cur;
                ans = p;
                if (!best) break;
            }
        } while (next_permutation(p.begin(), p.end()));

        Fori(n) out ans[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}