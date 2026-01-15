#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;



int main() {
    Sync;
	
    int n; cin >> n;
    vector<vector<int>> hand(6);
    vector<vector<int>> target(6);
    target[1] = { 3, 4 };
    target[2] = {};
    target[3] = { 1, 4 };
    target[4] = { 1, 3 };
    target[5] = {};
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        hand[a].push_back(b);
        hand[b].push_back(a);
    }
    for (int i = 1; i < 6; ++i) sort(hand[i].begin(), hand[i].end());

    bool ans(true);
    for (int i = 1; i < 6; ++i) {
        if (hand[i].size() != target[i].size()) {
            ans = false;
            break;
        }

        for (int j = 0; j < hand[i].size(); ++j) {
            if (hand[i][j] != target[i][j]) {
                ans = false;
                break;
            }
        }
    }

    cout << (ans ? "Wa-pa-pa-pa-pa-pa-pow!" : "Woof-meow-tweet-squeek");

    return 0;
}
