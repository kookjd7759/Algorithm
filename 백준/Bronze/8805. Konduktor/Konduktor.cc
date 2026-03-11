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

    int Z; in Z;
    while (Z--) {
        int N; ll K; in N >> K;
        if (N == 1) {
            out K endl;
            continue;
        }

        ll P = 2LL * N - 2, q = K / P, r = K % P;
        int a = min<ll>(r, N), b = r > N ? (int)(r - N) : 0;

        For1i(N) {
            ll ans = q * (i == 1 || i == N ? 1LL : 2LL);
            if (i <= a) ++ans;
            if (b && i >= N - b && i <= N - 1) ++ans;
            out ans;
            if (i != N) out " ";
        }
        ent;
    }

    return 0;
}