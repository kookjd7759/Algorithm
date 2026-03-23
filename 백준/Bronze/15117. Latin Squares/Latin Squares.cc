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
    vector<string> a(n);
    Fori(n) in a[i];

    auto cv = [&](char c) {
        if ('0' <= c && c <= '9') return c - '0';
        return c - 'A' + 10;
    };

    Fori(n) {
        vector<int> r(n), c(n);
        Forj(n) {
            int x = cv(a[i][j]), y = cv(a[j][i]);
            if (x < 0 || x >= n || y < 0 || y >= n || r[x] || c[y]) {
                out "No" endl;
                return 0;
            }
            r[x] = c[y] = 1;
        }
    }

    Fori(n) {
        char c = i < 10 ? char('0' + i) : char('A' + i - 10);
        if (a[0][i] != c || a[i][0] != c) {
            out "Not Reduced" endl;
            return 0;
        }
    }

    out "Reduced" endl;

    return 0;
}