#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(2);
	int n; cin >> n;
	while (n--) {
		int k; cin >> k;
		double sum(0.0);
		while (k--) {
			string name, c, d; cin >> name >> c >> d;
			double price = stod(c) * stod(d);
			sum += price;
		}
		cout << "$" << sum << "\n";
	}
}