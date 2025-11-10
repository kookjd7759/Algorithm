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

    int N; in N;
    int sr, sc; in sr >> sc;

    vector<vector<int>> vis(N + 1, vector<int>(N + 1, 0));
    vector<pair<int, int>> path; path.reserve(1LL * N * N);

    const int dx[8] = { -2,-2,-1,-1, 1, 1, 2, 2 };
    const int dy[8] = { -1, 1,-2, 2,-2, 2,-1, 1 };

    auto inb = [&](int r, int c) { return r >= 1 && r <= N && c >= 1 && c <= N; };

    auto degree = [&](int r, int c) {
        int d = 0;
        Fori(8) {
            int nr = r + dx[i], nc = c + dy[i];
            if (inb(nr, nc) && !vis[nr][nc]) ++d;
        }
        return d;
        };

    int r = sr, c = sc;
    Fori(N * N) {
        path.push_back({ r,c });
        vis[r][c] = 1;

        int bestDeg = 1e9, br = -1, bc = -1;
        Fori(8) {
            int nr = r + dx[i], nc = c + dy[i];
            if (!inb(nr, nc) || vis[nr][nc]) continue;
            int d = degree(nr, nc);
            if (d < bestDeg || (d == bestDeg && (nr < br || (nr == br && nc < bc)))) {
                bestDeg = d; br = nr; bc = nc;
            }
        }
        if (i != N * N - 1) {
            if (br == -1) {
                out "-1 -1\n";
                return 0;
            }
            r = br; c = bc;
        }
    }

    for (auto& p : path) out p.first spc p.second << "\n";
}
