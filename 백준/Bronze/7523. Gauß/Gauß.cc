#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		long long n, m; cin >> n >> m; n--;
		cout << "Scenario #" << i << ":\n";
		cout << ((1 + m) * m / 2) - ((1 + n) * n / 2) << "\n\n";
	}
}