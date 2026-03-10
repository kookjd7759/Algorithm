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

    int I; in I;
    string s; getline(cin, s);

    vector<vector<string>> a(I, vector<string>(10));
    Fori(I) {
        int row = 0;
        while (row < 10) {
            getline(cin, s);
            if (s.empty()) continue;
            a[i][row++] = s;
        }
    }

    int n = -1;
    while (getline(cin, s)) {
        if (s.empty()) continue;
        stringstream ss(s);
        ss >> n;
        break;
    }

    Fori(n) {
        vector<vector<int>> ans(10, vector<int>(10, 0));
        while (getline(cin, s) && s.empty());
        stringstream ss(s);
        int idx;
        while (ss >> idx) Forj(10) Fork(10) ans[j][k] += a[idx][j][k] - '0';

        Forj(10) {
            Fork(10) {
                out setw(2) << setfill('0') << ans[j][k];
                if (k != 9) out " ";
            }
            out "\n";
        }
        if (i != n - 1) out "\n";
    }

    return 0;
}