#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
    Sync;

    int n; cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; ++i) cin >> board[i];

    for (int i = 0; i < n; ++i) {
        bool chk = true;
        for (int j = 0; j < n; ++j)
            if (board[i][j] != board[j][i]) {
                cout << "NO";
                return 0;
            }
    }
    cout << "YES";

    return 0;
}
