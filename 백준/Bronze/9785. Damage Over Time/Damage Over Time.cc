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

    int N, M; in N >> M;
    vector<pair<int,int>> a(N);
    Fori(N) in a[i].first >> a[i].second;
    sort(a.begin(), a.end(), [](auto &x, auto &y){ if (x.first != y.first) return x.first > y.first; return x.second > y.second; });

    ll mx = 0; Fori(M) mx += (ll)a[i].first;
    int d = a[M-1].first, cntG = 0, mnG = INT_MAX;
    Fori(M) if (a[i].first > d) cntG++, mnG = min(mnG, a[i].second);

    vector<int> eq; eq.reserve(N);
    Fori(N) if (a[i].first == d) eq.push_back(a[i].second);
    sort(eq.begin(), eq.end(), greater<int>());

    int r = M - cntG, mnE = (r ? eq[r-1] : INT_MAX);
    int ansT = min(mnG, mnE);
    if (cntG == 0) ansT = mnE;

    out mx spc ansT endl;
    return 0;
}
