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

    int N;
    in N;
    vector<ll> A(N);
    Fori(N) in A[i];

    auto prod = [&](int l, int r) {
        ll p = 1;
        for (int i = l; i <= r; ++i) p *= A[i];
        return p;
    };

    ll best = 0;
    for (int c1 = 0; c1 <= N - 4; ++c1) {
        for (int c2 = c1 + 1; c2 <= N - 3; ++c2) {
            for (int c3 = c2 + 1; c3 <= N - 2; ++c3) {
                ll s = 0;
                s += prod(0, c1);
                s += prod(c1 + 1, c2);
                s += prod(c2 + 1, c3);
                s += prod(c3 + 1, N - 1);
                if (s > best) best = s;
            }
        }
    }

    out best endl;

    return 0;
}
