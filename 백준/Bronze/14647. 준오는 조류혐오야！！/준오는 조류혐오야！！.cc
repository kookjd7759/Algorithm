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
    int n, m;
    in n >> m;
    vector<ll> row(n, 0), col(m, 0);
    ll total = 0;

    Fori(n) {
        Forj(m) {
            int x;
            in x;
            int c = 0;
            int v = x;
            if (v == 0) c = 0;
            else {
                while (v > 0) {
                    if (v % 10 == 9) ++c;
                    v /= 10;
                }
            }
            row[i] += c;
            col[j] += c;
            total += c;
        }
    }

    ll maxRow = 0, maxCol = 0;
    Fori(n) if (row[i] > maxRow) maxRow = row[i];
    Forj(m) if (col[j] > maxCol) maxCol = col[j];

    ll removed = max(maxRow, maxCol);
    ll ans = total - removed;
    out ans;
}
