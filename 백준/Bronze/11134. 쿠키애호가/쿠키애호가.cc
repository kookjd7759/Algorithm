#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n, c; cin >> n >> c;
		if (n % c == 0) cout << n / c << "\n";
		else cout << n / c + 1 << "\n";
	}
}