#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(2);
	double a, b;
	while (cin >> a >> b) cout << 1.0 / b * a << "\n";
}