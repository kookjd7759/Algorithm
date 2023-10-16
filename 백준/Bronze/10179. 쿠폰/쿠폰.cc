#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(2);
	int n; cin >> n;
	while (n--) {
		double a; cin >> a;
		a *= 0.8;
		cout << "$" << a << "\n";
	}
}