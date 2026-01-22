#include <iostream>
#include <vector>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n; cin >> n;
    string st; cin >> st;
    for (int i = 0; i < n - 4; ++i) {
        if (abs(st[i] - st[i + 1]) == 1 &&
            abs(st[i + 1] - st[i + 2]) == 1 &&
            abs(st[i + 2] - st[i + 3]) == 1 &&
            abs(st[i + 3] - st[i + 4]) == 1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
