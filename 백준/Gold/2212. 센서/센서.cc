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

    int N, K; in N; in K;
    vector<int> a(N); Fori(N) in a[i];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int M = (int)a.size();
    if (K >= M) { out 0 endl; return 0; }

    vector<int> d; d.reserve(M - 1);
    Fori(M - 1) d.push_back(a[i + 1] - a[i]);
    sort(d.begin(), d.end(), greater<int>());

    ll ans = (ll)a[M - 1] - a[0];
    Fori(K - 1) ans -= d[i];
    out ans endl;

    return 0;
}
