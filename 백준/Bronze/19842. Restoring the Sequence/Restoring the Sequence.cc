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

    int n, m; in n >> m;
    vector<int> a(m); Fori(m) in a[i];

    if (m != n - 1) {
        out "No" endl;
        return 0;
    }

    int miss = -1, j = 0;
    For1i(n) {
        if (j < m && a[j] == i) ++j;
        else {
            if (miss != -1) {
                out "No" endl;
                return 0;
            }
            miss = i;
        }
    }

    if (j != m || miss == -1) {
        out "No" endl;
        return 0;
    }

    out "Yes" endl;
    out miss endl;

    return 0;
}