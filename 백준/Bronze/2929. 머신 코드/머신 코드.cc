#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    string line; cin >> line;
    vector<int> count;
    int cnt(0);
    for (int i = line.size() - 1; i >= 0; --i) {
        char c(line[i]);
        if (isupper(c)) {
            count.push_back(cnt);
            cnt = 0;
        }
        else cnt++;
    }
    reverse(count.begin(), count.end());

    int ans(0);
    for (int i = 0; i < count.size() - 1; ++i) {
        if ((count[i] + 1) % 4 == 0) continue;
        ans += 4 - (count[i] + 1) % 4;
    }
    cout << ans;

    return 0;
}
