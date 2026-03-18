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
#define For1j(x) for (int j = 1; j <= x; ++i)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

bool Ok(ll x) {
    string s = to_string(x);
    for (int i = 1; i < (int)s.size(); ++i) if (s[i] != s[i - 1] + 1) return false;
    return true;
}

int main() {
    Sync;

    int N; in N;
    vector<ll> a(N);
    Fori(N) in a[i];

    ll ans = -1;
    Fori(N) for (int j = i + 1; j < N; ++j) {
        ll p = a[i] * a[j];
        if (Ok(p)) ans = max(ans, p);
    }
    out ans endl;

    return 0;
}