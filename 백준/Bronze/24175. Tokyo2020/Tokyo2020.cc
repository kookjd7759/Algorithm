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

    int N;
    while (in N, N) {
        map<int, int> gold, total;
        Fori(N) {
            int y; string s, m; in y >> s >> m;
            total[y]++;
            if (m == "Gold") gold[y]++;
        }
        int byGold = -1, mxGold = -1, byTotal = -1, mxTotal = -1;
        for (auto &p : total) {
            int y = p.first;
            int g = gold[y], t = total[y];
            if (g > mxGold) mxGold = g, byGold = y;
            if (t > mxTotal) mxTotal = t, byTotal = y;
        }
        out byGold spc byTotal endl;
    }

    return 0;
}