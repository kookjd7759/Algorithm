#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ret(0);
        for (int k = 1; k <= n; k++) {
            int Tn = (k + 2) * (k + 1) / 2;
            ret += k * Tn;
        }
        cout << ret << "\n";
    }
}