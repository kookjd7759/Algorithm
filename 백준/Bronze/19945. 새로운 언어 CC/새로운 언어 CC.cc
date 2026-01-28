#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int n; cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    if (n < 0) {
        cout << 32;
        return 0;
    }

    int bits = 0;
    while (n > 0) {
        bits++;
        n >>= 1;
    }

    cout << bits;
    return 0;
}
