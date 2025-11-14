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

    ll N;
    in N;
    if (N == 0) {
        out "NO\n";
        return 0;
    }

    const ll LIM = 1000000000000000000LL;
    vector<ll> f;
    f.push_back(1);
    for (ll i = 1;; ++i) {
        ll nxt = f.back() * i;
        if (nxt > LIM) break;
        f.push_back(nxt);
    }

    int sz = (int)f.size();
    ll maxMask = 1LL << sz;
    bool ok = false;

    for (ll mask = 1; mask < maxMask && !ok; ++mask) {
        ll sum = 0;
        Fori(sz) {
            if (mask & (1LL << i)) {
                sum += f[i];
                if (sum > N) break;
            }
        }
        if (sum == N) ok = true;
    }

    if (ok) out "YES\n";
    else out "NO\n";

    return 0;
}
