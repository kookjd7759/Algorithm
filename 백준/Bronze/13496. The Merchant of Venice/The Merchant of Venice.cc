#include <iostream>

using namespace std;

int main() {
    int t, cnt(0); cin >> t;
    while (t--) {
        int n, s, d;  cin >> n >> s >> d;
        int ans(0);
        for (int j = 0, a, b; j < n; j++) {
            cin >> a >> b;
            if (s * d >= a) ans += b;
        }
        cout << "Data Set " << ++cnt << ":\n" << ans << '\n' << '\n';
    }
}