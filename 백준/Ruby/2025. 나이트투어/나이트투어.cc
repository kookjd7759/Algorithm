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

int moves[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int N;

bool check(int x, int y) { return (0 <= x && x < N && 0 <= y && y < N); }
double centerScore(int x, int y) {
    double n = (N - 1) / 2.0;
    return fabs(x - n) + fabs(y - n);
}

int main() {
    Sync;

    int x, y; in N >> x >> y; --x, --y;

    vector<vector<bool>> visit(N, vector<bool>(N, false));
    vector<vector<int>> degree(N, vector<int>(N, 0));

    Fori(N) Forj(N){
        int d = 0;
        for (auto& move : moves) if (check(i + move[0], j + move[1])) ++d;
        degree[i][j] = d;
    }

    vector<pair<int, int>> path; path.reserve(N * N);
    for (int step = 0; step < N * N; ++step) {
        path.emplace_back(x, y);
        visit[x][y] = true;

        if (step == N * N - 1) break;

        for (auto& move : moves) {
            int nx = x + move[0], ny = y + move[1];
            if (check(nx, ny) && !visit[nx][ny] && degree[nx][ny] > 0) degree[nx][ny]--;
        }
        degree[x][y] = 0;

        vector<pair<int, int>> cand; cand.reserve(8);
        for (auto& move : moves) {
            int nx = x + move[0], ny = y + move[1];
            if (check(nx, ny) && !visit[nx][ny]) cand.emplace_back(nx, ny);
        }

        if (cand.empty()) {
            out "-1 -1\n";
            return 0;
        }

        sort(cand.begin(), cand.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
            int da = degree[a.first][a.second];
            int db = degree[b.first][b.second];
            if (da != db) return da < db;
            double ca = centerScore(a.first, a.second);
            double cb = centerScore(b.first, b.second);
            if (ca != cb) return ca < cb;
            if (a.first != b.first) return a.first < b.first;
            return a.second < b.second;
            });

        x = cand[0].first;
        y = cand[0].second;
    }

    for (auto& p : path) out(p.first + 1) spc(p.second + 1) endl;
}