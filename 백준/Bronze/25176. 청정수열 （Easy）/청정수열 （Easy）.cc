#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n, ans(1); cin >> n;
    for (int i = 2; i <= n; ++i) ans *= i;
    cout << ans;

    return 0;
}
