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

    int N, M;
    in N >> M;
    vector<string> g(N);
    Fori(N) in g[i];
    vector<pair<int,int>> unp;
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    Fori(N) Forj(M) {
        if (g[i][j] == 'b') {
            bool powered = false;
            for (int d = 0; d < 8; ++d) {
                int ni = i + dx[d];
                int nj = j + dy[d];
                if (ni >= 0 && ni < N && nj >= 0 && nj < M && g[ni][nj] == 'T') {
                    powered = true;
                    break;
                }
            }
            if (!powered) unp.emplace_back(i, j);
        }
    }
    if (unp.empty()) {
        out "True";
    } else {
        out "False\n";
        sort(unp.begin(), unp.end());
        for (auto &p : unp) out p.first spc p.second << "\n";
    }
    return 0;
}
