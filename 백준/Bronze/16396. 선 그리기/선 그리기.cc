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
    vector<pair<int,int>> seg(N);
    Fori(N) {
        int x, y;
        in x >> y;
        if (x > y) swap(x, y);
        seg[i] = {x, y};
    }
    sort(seg.begin(), seg.end());
    ll total = 0;
    int curL = seg[0].first;
    int curR = seg[0].second;
    for (int i = 1; i < N; ++i) {
        int L = seg[i].first;
        int R = seg[i].second;
        if (L > curR) {
            total += (ll)(curR - curL);
            curL = L;
            curR = R;
        } else {
            if (R > curR) curR = R;
        }
    }
    total += (ll)(curR - curL);
    out total;
}
