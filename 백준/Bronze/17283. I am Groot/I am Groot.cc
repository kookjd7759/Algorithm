#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    long long L;
    int R; cin >> L >> R;

    long long sum = 0;
    long long prev = L;
    long long cnt = 2;

    while (true) {
        long long len = (prev * R) / 100;
        if (len <= 5) break;
        sum += cnt * len;
        prev = len;
        cnt <<= 1;
    }

    cout << sum;
    return 0;
}
