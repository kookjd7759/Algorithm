#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
		cout << "$" << a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90 << "\n";
	}
}