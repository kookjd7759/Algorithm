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
    vector<int> cnt(n, 0);
    For1i(n) {
        int a; in a;
        int cand[3], sz = 0;
        for (int d = -1; d <= 1; ++d) {
            int v = a + d;
            if (v < 1 || v > n) continue;
            int r = (v - i) % n;
            if (r < 0) r += n;
            bool ok = true;
            Forj(sz) if (cand[j] == r) ok = false;
            if (ok) cand[sz++] = r;
        }
        Forj(sz) cnt[cand[j]]++;
    }

    Fori(n) if (cnt[i] == n) {
        out "YES" endl;
        out ((n - i) % n + 1) endl;
        return 0;
    }

    out "NO" endl;

    return 0;
}