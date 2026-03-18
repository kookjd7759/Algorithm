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

    int T; in T;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    For1i(T) {
        int x, y; string s; in x >> y >> s;
        int dir = 0, cnt = 0;
        vector<vector<int>> vis(64, vector<int>(64));
        vis[x][y] = 1;
        for (char c : s) {
            if (c == 'R') dir = (dir + 1) % 4;
            else if (c == 'L') dir = (dir + 3) % 4;
            else {
                x += dx[dir]; y += dy[dir];
                vis[x][y]++;
                if (vis[x][y] == 2) cnt++;
            }
        }
        out "Case #" << i << ": " << x << " " << y << " " << cnt endl;
    }

    return 0;
}