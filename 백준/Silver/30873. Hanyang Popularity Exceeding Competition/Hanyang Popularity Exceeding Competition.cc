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
    const int MAXX = 1001;
    int n; in n;
    vector<bitset<MAXX + 1>> mask(MAXX + 1);
    Fori(MAXX + 1) for (int j = i; j <= MAXX; ++j) mask[i].set(j);

    bitset<MAXX + 1> dp;
    dp.set(0);

    Fori(n) {
        int p, c; in p >> c;
        int l = max(0, p - c), r = min(1000, p + c);
        if (l <= r) dp |= ((dp & (mask[l] & ~mask[r + 1])) << 1);
    }

    for (int i = MAXX; i >= 0; --i) if (dp.test(i)) {
        out i;
        break;
    }
    return 0;
}