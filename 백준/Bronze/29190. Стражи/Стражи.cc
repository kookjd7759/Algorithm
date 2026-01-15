#include <iostream>

using namespace std;

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int x, y; cin >> x >> y;
    int k; cin >> k;

    long long ans = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i == x && j == y) continue;
            if (abs(i - x) + abs(j - y) <= k)
                ans++;
        }
    }

    cout << ans;
    return 0;
}
