#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, M; 
vector<vector<int>> workers;
vector<int> assigned;

void input() {
    cin >> N >> M;
    workers.resize(N + 1);
    assigned.assign(M + 1, 0);
    assigned.assign(M + 1, 0);
    for (int i = 1; i <= N; ++i) {
        int len; cin >> len;
        workers[i].resize(len);
        for (int j = 0; j < len; ++j)
            cin >> workers[i][j];
    }
}

bool request_change(int worker, int target, vector<bool>& visited) {
    visited[worker] = true;
    for (int j = 0; j < workers[worker].size(); ++j) {
        int work = workers[worker][j];
        if (work == target) continue;

        if (!assigned[work]) {
            assigned[target] = 0;
            assigned[work] = worker;
            return true;
        }

        int other = assigned[work];
        if (visited[other]) continue;
        if (request_change(other, work, visited)) {
            assigned[target] = 0;
            assigned[work] = worker;
            return true;
        }
    }
    return false;
}

void solve() {
    for (int worker = 1; worker <= N; ++worker) {
        for (int j = 0; j < workers[worker].size(); ++j) {
            int work = workers[worker][j];
            if (!assigned[work]) {
                assigned[work] = worker;
                break;
            }
            
            vector<bool> visited(N + 1, false);
            int other = assigned[work];
            if (request_change(other, work, visited)) {
                assigned[work] = worker;
                break;
            }
        }
    }

    int ans(0);
    for (int i = 1; i <= M; ++i) if (assigned[i]) ans++;
    cout << ans;
}

int main() {
    Sync;

    input();
    solve();

    return 0;
}
