#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int N, M;
vector<vector<int>> canDo;
vector<int> assigned;
vector<bool> visited;

void input() {
    cin >> N >> M;
    canDo.assign(N + 1, vector<int>(0));
    for (int i = 1; i <= N; ++i) {
        int len; cin >> len;
        canDo[i].resize(len);
        for (int j = 0; j < len; ++j) cin >> canDo[i][j];
    }
    assigned.assign(M + 1, 0);
    visited.assign(N + 1, false);
}

bool dfs(int worker) {
    if (visited[worker]) return false;
    visited[worker] = true;

    for (const int& work : canDo[worker]) {
        if (!assigned[work] || dfs(assigned[work])) {
            assigned[work] = worker;
            return true;
        }
    }
    return false;
}

int solve() {
    int ans = 0;
    for (int worker = 1; worker <= N; ++worker) {
        fill(visited.begin(), visited.end(), false);
        if (dfs(worker)) ans++;
    }
    return ans;
}

int main() {
    Sync;

    input();
    int ans = 0;
    ans += solve();
    ans += solve();
    cout << ans;
    return 0;
}
