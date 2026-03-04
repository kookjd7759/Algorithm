#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<long long>> a(N, vector<long long>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    int Q;
    cin >> Q;

    for (int qi = 0; qi < Q; qi++) {
        string type;
        int k;
        long long val;
        cin >> type >> k >> val;
        --k; // 0-index

        if (type == "row") {
            for (int j = 0; j < M; j++) a[k][j] += val;
        } else { // "col"
            for (int i = 0; i < N; i++) a[i][k] += val;
        }
    }

    long long sum = 0;
    long long mn = LLONG_MAX, mx = LLONG_MIN;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += a[i][j];
            mn = min(mn, a[i][j]);
            mx = max(mx, a[i][j]);
        }
    }

    cout << sum << ' ' << mn << ' ' << mx << "\n";
    return 0;
}