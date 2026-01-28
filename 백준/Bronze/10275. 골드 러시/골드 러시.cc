#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int t;
    cin >> t;
    while (t--) {
        int n;
        unsigned long long a, b;
        cin >> n >> a >> b;

        unsigned long long ans = 0;
        while (true) {
            if (a == 0 || a == (1ULL << n)) break;
            if (n == 0) break;
            unsigned long long half = 1ULL << (n - 1);
            ans++;
            if (a == half) break;
            if (a > half) a -= half;
            n--;
        }

        cout << ans << "\n";
    }

    return 0;
}
