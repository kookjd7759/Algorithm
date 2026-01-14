#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int N, M, K;
vector<vector<int>> canDo;
vector<int> assigned;
vector<int> visited;

void input() {
    cin >> N >> M >> K;
    canDo.assign(N + 1, vector<int>(0));
    for (int i = 1; i <= N; ++i) {
        int len; cin >> len;
        canDo[i].resize(len);
        for (int j = 0; j < len; ++j) cin >> canDo[i][j];
    }
    assigned.assign(M + 1, 0);
}

bool dfs(int worker, int stamp) {
    if (visited[worker] == stamp) return false;
    visited[worker] = stamp;

    for (const int& work : canDo[worker]) {
        if (!assigned[work] || dfs(assigned[work], stamp)) {
            assigned[work] = worker;
            return true;
        }
    }
    return false;
}

int solve() {
    visited.assign(N + 1, 0);
    int ans = 0;
    for (int worker = 1; worker <= N; ++worker) {
        if (dfs(worker, worker)) ans++;
    }
    return ans;
}

int main() {
    Sync;

    input();
    int ans = 0;
    ans += solve();
    ans += min(solve(), K);
    cout << ans;
    return 0;
}
