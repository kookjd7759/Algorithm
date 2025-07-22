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
    
    int n, mini(2e9), min_idx(-1), maxi(-2e9), max_idx(-1); in n;
    Fori(n) {
        int m; in m;
        if (mini > m) {
            mini = m;
            min_idx = i;
        }
        if (maxi < m) {
            maxi = m;
            max_idx = i;
        }
    }
    if (min_idx == 0) out "ez";
    else if (max_idx == 0) out "hard";
    else out "?";
}