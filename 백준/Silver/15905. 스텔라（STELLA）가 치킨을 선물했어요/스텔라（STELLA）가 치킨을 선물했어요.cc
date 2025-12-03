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

    int n; in n;
    pair<int, int>* p = new pair<int, int>[n];
    Fori(n) in p[i].first >> p[i].second;

    sort(p, p + n, [&](const pair<int, int>& a, const pair<int, int>& b) -> bool {
        if (a.first == b.first) return a.second > b.second;
        return a.first > b.first;
        });

    int ans(0);
    if (n <= 5) out ans;
    else {
        int th5 = p[4].first;
        for (int i = 5; i < n; ++i) if (p[i].first == th5) ++ans; else break;
        out ans;
    }
}
