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
    in R >> C;
    vector<string> g(R);
    Fori(R) in g[i];
    vector<vector<int>> vis(R, vector<int>(C, 0));
    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};
    int cnt = 0;
    Fori(R) {
        Forj(C) {
            if (g[i][j] == '#' && !vis[i][j]) {
                ++cnt;
                queue<pair<int,int>> q;
                q.push({i,j});
                vis[i][j] = 1;
                while (!q.empty()) {
                    auto [r,c] = q.front(); q.pop();
                    Fork(4) {
                        int nr = r + dr[k], nc = c + dc[k];
                        if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
                        if (g[nr][nc] == '#' && !vis[nr][nc]) {
                            vis[nr][nc] = 1;
                            q.push({nr,nc});
                        }
                    }
                }
            }
        }
    }
    out cnt;
}
