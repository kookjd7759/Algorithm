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
    while (n--) {
        int r, c; in r >> c;
        vector<string> a(r);
        Fori(r) in a[i];

        vector<vector<int>> row(r, vector<int>(c)), col(r, vector<int>(c));

        Fori(r) {
            int j = 0;
            while (j < c) {
                if (a[i][j] == '#') { ++j; continue; }
                int k = j, cnt = 0;
                while (k < c && a[i][k] != '#') { if (a[i][k] == '@') ++cnt; ++k; }
                for (int t = j; t < k; ++t) row[i][t] = cnt;
                j = k;
            }
        }

        Forj(c) {
            int i = 0;
            while (i < r) {
                if (a[i][j] == '#') { ++i; continue; }
                int k = i, cnt = 0;
                while (k < r && a[k][j] != '#') { if (a[k][j] == '@') ++cnt; ++k; }
                for (int t = i; t < k; ++t) col[t][j] = cnt;
                i = k;
            }
        }

        int br = -1, bc = -1, best = -1;
        Fori(r) Forj(c) if (a[i][j] == '.') {
            int cur = row[i][j] + col[i][j];
            if (cur > best) best = cur, br = i, bc = j;
        }

        out br << ", " << bc endl;
    }

    return 0;
}