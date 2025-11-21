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

    ll C;
    int M;
    in C;
    in M;

    vector<ll> P(M);
    unordered_set<ll> S;
    S.reserve(M * 2);

    Fori(M) {
        in P[i];
        S.insert(P[i]);
    }

    ll a = -1, b = -1;
    Fori(M) {
        ll p = P[i];
        if (C % p != 0) continue;
        ll q = C / p;
        if (q == p) continue;
        if (S.find(q) != S.end()) {
            if (p < q) {
                a = p;
                b = q;
            } else {
                a = q;
                b = p;
            }
            break;
        }
    }

    out a spc b endl;

    return 0;
}
