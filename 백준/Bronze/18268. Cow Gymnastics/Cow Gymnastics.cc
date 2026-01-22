#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int K, N;
    cin >> K >> N;

    vector<vector<int>> pos(K, vector<int>(N + 1));
    for (int s = 0; s < K; ++s) {
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            pos[s][x] = i;
        }
    }

    int ans = 0;
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            if (a == b) continue;
            bool ok = true;
            for (int s = 0; s < K; ++s) {
                if (pos[s][a] > pos[s][b]) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans++;
        }
    }

    cout << ans;
    return 0;
}
