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

ll Solve(int n, int m, int r1, int c1, int r2, int c2){
    ll ret = 0;
    if(r1 < r2) ret = max(ret, 1LL * (r2 - 1) * m);
    if(r1 > r2) ret = max(ret, 1LL * (n - r2) * m);
    if(c1 < c2) ret = max(ret, 1LL * n * (c2 - 1));
    if(c1 > c2) ret = max(ret, 1LL * n * (m - c2));
    return ret;
}

int main() {
    Sync;

    int n, m; in n >> m;
    vector<pair<int,int>> v;
    For1i(n) For1j(m){
        int x; in x;
        if(x == 1) v.push_back({i, j});
    }

    int r1 = v[0].first, c1 = v[0].second, r2 = v[1].first, c2 = v[1].second;
    out max(Solve(n, m, r1, c1, r2, c2), Solve(n, m, r2, c2, r1, c1)) endl;

    return 0;
}