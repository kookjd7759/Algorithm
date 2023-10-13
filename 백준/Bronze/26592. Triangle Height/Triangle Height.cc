#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(2);
	int n; cin >> n;
	while (n--) {
		double a, b; cin >> a >> b;
		double h = (a * 2) / b;
		cout << "The height of the triangle is " << h << " units\n";
	}
}