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
        int N; in N;
        vector<ll> p(2 * N), ans;
        map<ll, int> cnt;
        Forj(2 * N) { in p[j]; cnt[p[j]]++; }

        Forj(2 * N) {
            ll x = p[j];
            if (!cnt[x]) continue;
            cnt[x]--;
            ll y = x * 4 / 3;
            cnt[y]--;
            ans.push_back(x);
        }

        out "Case #" << i << ":";
        Forj(N) out " " << ans[j];
        ent;
    }

    return 0;
}