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

    int R, C;
    while (true) {
        in R >> C;
        if (R == 0 && C == 0) break;

        vector<string> g(R);
        Fori(R) in g[i];

        vector<string> ans = g;
        int dr[8] = {-1,-1,-1,0,0,1,1,1};
        int dc[8] = {-1,0,1,-1,1,-1,0,1};

        Fori(R) {
            Forj(C) {
                if (g[i][j] == '*') continue;
                int cnt = 0;
                For1k(8) {
                    int nr = i + dr[k-1];
                    int nc = j + dc[k-1];
                    if (0 <= nr && nr < R && 0 <= nc && nc < C && g[nr][nc] == '*') ++cnt;
                }
                ans[i][j] = char('0' + cnt);
            }
        }

        Fori(R) out ans[i] << "\n";
    }

    return 0;
}
