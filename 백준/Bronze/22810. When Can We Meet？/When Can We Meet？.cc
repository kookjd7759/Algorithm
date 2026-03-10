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

    while (1) {
        int N, Q; in N >> Q;
        if (N == 0 && Q == 0) break;

        vector<int> cnt(100, 0);
        Fori(N) {
            int M; in M;
            Forj(M) {
                int d; in d;
                ++cnt[d];
            }
        }

        int ans = 0, mx = 0;
        for (int d = 1; d < 100; ++d) {
            if (cnt[d] >= Q && cnt[d] > mx) mx = cnt[d], ans = d;
        }

        out ans endl;
    }

    return 0;
}