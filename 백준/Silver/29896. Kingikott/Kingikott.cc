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

    vector<string> names(N);
    vector<ll> price(N);
    unordered_map<string, int> id;
    id.reserve(N * 2);

    Fori(N) {
        in names[i];
        in price[i];
        id[names[i]] = i;
    }

    int M;
    in M;

    vector<int> cnt(N, 0);
    Fori(M) {
        string g;
        in g;
        int idx = id[g];
        ++cnt[idx];
    }

    ll sum0 = 0;
    Fori(N) {
        sum0 += price[i] * (ll)cnt[i];
    }

    ll bestDelta = 0;

    Fori(N) {
        for (int j = i + 1; j < N; ++j) {
            ll delta = (ll)(cnt[i] - cnt[j]) * (ll)(price[j] - price[i]);
            if (delta < bestDelta) bestDelta = delta;
        }
    }

    ll answer = sum0 + bestDelta;
    out answer endl;

    return 0;
}
