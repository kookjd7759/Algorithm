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

    vector<tuple<int,int,int>> v;
    For1i(150) for (int j = i + 1; j <= 150; ++j) v.push_back({i * i + j * j, i, j});
    sort(v.begin(), v.end());

    map<pair<int,int>, pair<int,int>> nxt;
    for (int i = 0; i + 1 < (int)v.size(); ++i) {
        auto [d1, h1, w1] = v[i];
        auto [d2, h2, w2] = v[i + 1];
        nxt[{h1, w1}] = {h2, w2};
    }

    int h, w;
    while (in h >> w, h || w) {
        auto p = nxt[{h, w}];
        out p.first spc p.second endl;
    }

    return 0;
}