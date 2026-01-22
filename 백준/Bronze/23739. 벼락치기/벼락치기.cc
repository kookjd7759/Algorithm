#include <iostream>
#include <vector>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n; cin >> n;
    vector<int> arr(n); for (int i = 0; i < n; ++i) cin >> arr[i];

    int time(30), ans(0);
    for (int i = 0; i < n; ++i) {
        int half = arr[i] / 2 + ((arr[i] & 1) ? 1 : 0);
        int study = min(time, arr[i]);
        time -= study;
        if (study >= half) ans++;
        if (time <= 0) time = 30;
    }
    cout << ans;

    return 0;
}
