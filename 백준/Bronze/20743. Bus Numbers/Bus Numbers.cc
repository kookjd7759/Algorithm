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

    int m; in m;
    vector<int> cnt(m + 1);
    for (int i = 1; 1LL * i * i * i <= m; ++i) {
        ll a = 1LL * i * i * i;
        for (int j = i; a + 1LL * j * j * j <= m; ++j) ++cnt[a + 1LL * j * j * j];
    }
    for (int i = m; i >= 1; --i) {
        if (cnt[i] >= 2) {
            out i endl;
            return 0;
        }
    }
    out "none" endl;

    return 0;
}