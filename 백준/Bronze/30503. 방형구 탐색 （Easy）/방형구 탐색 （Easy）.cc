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
    vector<ll> a(n + 1);
    For1i(n) in a[i];

    int q; in q;
    while (q--) {
        int tp; in tp;
        if (tp == 1) {
            int l, r; ll k; in l >> r >> k;
            int cnt = 0;
            for (int i = l; i <= r; ++i) if (a[i] == k) ++cnt;
            out cnt endl;
        } else {
            int l, r; in l >> r;
            for (int i = l; i <= r; ++i) a[i] = 0;
        }
    }

    return 0;
}
