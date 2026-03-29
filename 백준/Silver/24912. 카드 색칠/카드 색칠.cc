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
    vector<int> a(n + 1), org(n + 1), pos;
    For1i(n) in a[i], org[i] = a[i], (a[i] ? pos.push_back(i) : void());

    if (pos.empty()) {
        For1i(n) a[i] = (i & 1 ? 1 : 2);
    } else {
        for (int i = pos[0] - 1; i >= 1; --i) a[i] = (a[i + 1] == 1 ? 2 : 1);
        for (int t = 0; t + 1 < (int)pos.size(); ++t) {
            int l = pos[t], r = pos[t + 1];
            if (r == l + 1) continue;
            for (int i = l + 1; i < r; ++i) {
                if (i == r - 1) {
                    For1j(3) if (j != a[i - 1] && j != a[r]) { a[i] = j; break; }
                } else {
                    For1j(3) if (j != a[i - 1]) { a[i] = j; break; }
                }
            }
        }
        for (int i = pos.back() + 1; i <= n; ++i) a[i] = (a[i - 1] == 1 ? 2 : 1);
    }

    For1i(n) if (org[i] && org[i] != a[i]) { out -1; return 0; }
    for (int i = 1; i < n; ++i) if (a[i] == a[i + 1]) { out -1; return 0; }

    For1i(n) out a[i] << (i == n ? "" : " ");
    return 0;
}