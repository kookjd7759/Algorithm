#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;
	
    int n; string target, answer(""); cin >> n >> target;
    vector<pair<string, string>> vec(n);
    int idx(n - 1);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
        if (vec[i].first == target) {
            answer = vec[i].second;
            idx = i;
        }
    }

    int ans(0);
    for (int i = idx - 1; i >= 0; --i) if (vec[i].second == answer) ans++;
    cout << ans;

    return 0;
}
