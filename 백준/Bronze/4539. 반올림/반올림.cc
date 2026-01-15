#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
    Sync;

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int line(10), idx(1);
        while (true) {
            if (n < line) break;
            n += idx * 5;
            line *= 10;
            idx *= 10;
        }
        line /= 10;
        cout << (n / line) * line << "\n";
    }

    return 0;
}
