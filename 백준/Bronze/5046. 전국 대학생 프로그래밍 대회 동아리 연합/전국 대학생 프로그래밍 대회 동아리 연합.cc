#include <bits/stdc++.h>
using namespace std;

#define Sync ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    Sync;

    int N, B, H, W; cin >> N >> B >> H >> W;

    int ans = INT_MAX;

    for (int i = 0; i < H; ++i) {
        int p;  cin >> p;
        int cost = p * N;

        for (int w = 0; w < W; ++w) {
            int a;  cin >> a;
            if (a >= N && cost <= B)
                ans = min(ans, cost);
        }
    }

    if (ans == INT_MAX) cout << "stay home";
    else cout << ans;

    return 0;
}
