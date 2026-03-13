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

vector<pair<int,int>> ans;
bool vis[10][10];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void Dfs(int x, int y) {
    vis[x][y] = 1;
    ans.push_back({x, y});
    Fori(4) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10 || vis[nx][ny]) continue;
        Dfs(nx, ny);
        ans.push_back({x, y});
    }
}

int main() {
    Sync;

    int x, y; in x >> y;
    Dfs(x, y);
    for (auto &p : ans) out p.first spc p.second endl;

    return 0;
}