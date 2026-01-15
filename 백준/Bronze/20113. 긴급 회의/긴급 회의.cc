#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int N, maxi(-1); cin >> N;
    vector<int> player(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        int a; cin >> a;
        player[a]++;
        maxi = max(maxi, player[a]);
    }
    int ans(-1);
    for (int i = 1; i <= N; ++i) {
        if (maxi == player[i]) {
            if (ans != -1) {
                ans = -1;
                break;
            }
            ans = i;
        }
    }

    cout << (ans == -1 ? "skipped" : to_string(ans));

    return 0;
}
