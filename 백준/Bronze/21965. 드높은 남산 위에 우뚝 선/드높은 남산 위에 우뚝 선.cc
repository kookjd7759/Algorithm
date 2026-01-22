#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    bool ans(true);
    bool isUp(true);
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            ans = false;
            break;
        }

        if (isUp) {
            if (arr[i] > arr[i + 1]) {
                isUp = false;
            }
        }
        else { // !isUp
            if (arr[i] < arr[i + 1]) {
                ans = false;
                break;
            }
        }
    }

    cout << (ans ? "YES" : "NO");

    return 0;
}
