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
        int N, Q; in N >> Q;
        vector<int> a(N + 1);
        For1j(N) in a[j];
        vector<ll> sums;
        sums.reserve(1LL * N * (N + 1) / 2);
        For1j(N) {
            ll cur = 0;
            for (int k = j; k <= N; ++k) cur += a[k], sums.push_back(cur);
        }
        sort(sums.begin(), sums.end());
        int M = sums.size();
        vector<ll> ps(M + 1);
        Forj(M) ps[j + 1] = ps[j] + sums[j];
        out "Case #" << i << ":" endl;
        while (Q--) {
            int L, R; in L >> R;
            out ps[R] - ps[L - 1] endl;
        }
    }

    return 0;
}