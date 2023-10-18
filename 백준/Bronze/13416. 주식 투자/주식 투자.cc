#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
   
    while (t--) {
        int n, ret(0); cin >> n;
        for (int i = 0; i < n; i++) {
            int a, b, c;  cin >> a >> b >> c;
            int profit = max(a, max(b, c));
            if (profit <= 0) continue;
            ret += profit;
        }
        cout << ret << '\n';
    }
}