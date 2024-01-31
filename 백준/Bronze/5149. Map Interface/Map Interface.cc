#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
    Sync;

    int T; in T;
    for (int tc = 1; tc <= T; tc++) {
        int n, m; in n >> m;
        vector<pair<int, int>> vec(n);
        Fori(n) in vec[i].first >> vec[i].second;

        int l(2e9), r(-2e9), u(-2e9), d(2e9);
        Fori(m) {
            int idx; in idx; idx--;
            int x = vec[idx].first;
            int y = vec[idx].second;
            l = min(l, x);
            r = max(r, x);
            d = min(d, y);
            u = max(u, y);
        }

        int cnt(0);
        Fori(n) {
            int x = vec[i].first;
            int y = vec[i].second;
            if ((l <= x && x <= r) &&
                (d <= y && y <= u))
                cnt++;
        }

        out "Data Set " << tc << ":\n";
        out cnt endl;
        ent;
    }
}