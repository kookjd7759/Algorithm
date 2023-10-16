#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double x, y; cin >> x >> y;
	int n; cin >> n;
	double minPrice = x / y;
	while (n--) {
		double a, b; cin >> a >> b;
		double Price = a / b;
		if (minPrice > Price) minPrice = Price;
	}
	cout << minPrice * 1000;
}