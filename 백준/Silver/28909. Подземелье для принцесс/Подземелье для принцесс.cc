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

    int n, m, k; in n >> m >> k;
    vector<int> a(n + 1), b(m);
    For1i(n) in a[i];
    Fori(m) in b[i];

    vector<int> used(n + 1, 0);

    auto dist = [&](int idx) {
        if (idx <= k) return k - idx;
        return idx - k - 1;
    };

    Fori(m) {
        int best = -1, bestd = 1e9;

        For1j(n) if (!used[j] && a[j] == b[i]) {
            int d = dist(j);
            if (d < bestd || (d == bestd && j < best)) bestd = d, best = j;
        }

        if (best == -1) {
            For1j(n) if (!used[j] && a[j] > b[i]) {
                int d = dist(j);
                if (d < bestd || (d == bestd && j < best)) bestd = d, best = j;
            }
        }

        if (best != -1) used[best] = 1;
        out best;
        if (i + 1 < m) out " ";
    }
    ent;

    return 0;
}