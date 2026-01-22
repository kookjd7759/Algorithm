#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int N, M;
    long long K;
    cin >> N >> M >> K;

    vector<vector<long long>> A(N, vector<long long>(M));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    vector<long long> sum(N, 0);
    vector<int> cnt(N, 0);

    for (int j = 0; j < M; ++j) {
        for (int i = 0; i < N; ++i) {
            sum[i] += A[i][j];
            cnt[i]++;
            if (sum[i] >= K) {
                cout << (i + 1) << ' ' << cnt[i];
                return 0;
            }
        }
    }

    return 0;
}
