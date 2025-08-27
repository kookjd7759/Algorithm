#include <bits/stdc++.h>
using namespace std;

#define in  cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"

static const int MOV[8][2] = {
    { 2,  1}, { 2, -1}, {-2,  1}, {-2, -1},
    { 1,  2}, { 1, -2}, {-1,  2}, {-1, -2}
};

int N;
vector<vector<char>> vis;
vector<vector<int>> deg;

inline bool inb(int x, int y) { return 0 <= x && x < N && 0 <= y && y < N; }

void init_degree() {
    deg.assign(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int d = 0;
            for (auto& m : MOV) {
                int ni = i + m[0], nj = j + m[1];
                if (inb(ni, nj)) ++d;
            }
            deg[i][j] = d;
        }
    }
}

inline void apply_visit(int x, int y) {
    vis[x][y] = 1;
    for (auto& m : MOV) {
        int nx = x + m[0], ny = y + m[1];
        if (inb(nx, ny) && !vis[nx][ny] && deg[nx][ny] > 0) deg[nx][ny]--;
    }
    deg[x][y] = 0;
}

inline double centerScore(int i, int j) {
    double c = (N - 1) / 2.0;
    return fabs(i - c) + fabs(j - c);
}
inline int edgePenalty(int i, int j) {
    int dTop = i, dLeft = j, dBottom = N - 1 - i, dRight = N - 1 - j;
    int dmin = min(min(dTop, dBottom), min(dLeft, dRight));
    return (dmin == 0 ? 2 : (dmin == 1 ? 1 : 0));
}
inline int minNextDeg(int i, int j) {
    int mn = 9;
    for (auto& m : MOV) {
        int ni = i + m[0], nj = j + m[1];
        if (inb(ni, nj) && !vis[ni][nj]) mn = min(mn, deg[ni][nj]);
    }
    return (mn == 9 ? 9 : mn);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sx, sy;
    in N;
    in sx >> sy; // 1-index 입력
    int x = sx - 1, y = sy - 1; // 0-index
    if (!inb(x, y)) {
        out "-1 -1\n"; return 0;
    }

    vis.assign(N, vector<char>(N, 0));
    init_degree();

    vector<pair<int, int>> path;
    path.reserve(N * N);

    apply_visit(x, y);
    path.emplace_back(x, y);

    for (int step = 1; step < N * N; ++step) {
        vector<pair<int, int>> cand; cand.reserve(8);
        for (auto& m : MOV) {
            int nx = x + m[0], ny = y + m[1];
            if (inb(nx, ny) && !vis[nx][ny]) cand.emplace_back(nx, ny);
        }
        if (cand.empty()) {
            out "-1 -1\n";
            return 0;
        }

        sort(cand.begin(), cand.end(),
            [&](const pair<int, int>& A, const pair<int, int>& B) {
                int dA = deg[A.first][A.second];
                int dB = deg[B.first][B.second];
                if (dA != dB) return dA < dB;

                int nA = minNextDeg(A.first, A.second);
                int nB = minNextDeg(B.first, B.second);
                if (nA != nB) return nA < nB;

                int eA = edgePenalty(A.first, A.second);
                int eB = edgePenalty(B.first, B.second);
                if (eA != eB) return eA < eB;

                double cA = centerScore(A.first, A.second);
                double cB = centerScore(B.first, B.second);
                if (cA != cB) return cA < cB;

                if (A.first != B.first) return A.first < B.first;
                return A.second < B.second;
            });

        x = cand[0].first; y = cand[0].second;
        apply_visit(x, y);
        path.emplace_back(x, y);
    }

    for (auto& p : path) {
        out(p.first + 1) spc(p.second + 1) endl;
    }
    return 0;
}
