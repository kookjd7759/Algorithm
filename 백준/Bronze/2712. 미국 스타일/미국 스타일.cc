#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(4);
	int t; cin >> t;
	while (t--) {
		double a; string op; cin >> a >> op;
		if (!op.compare("kg")) cout << a * 2.2046 << " lb";
		else if (!op.compare("lb")) cout << a * 0.4536 << " kg";
		else if (!op.compare("l")) cout << a * 0.2642 << " g";
		else if (!op.compare("g")) cout << a * 3.7854 << " l";
		cout << "\n";
	}
}