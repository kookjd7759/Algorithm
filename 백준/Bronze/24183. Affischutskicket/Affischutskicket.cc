#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(5);
	double c4, a3, a4; cin >> c4 >> a3 >> a4;
	cout << (229 * 324 * c4 * 2 + 297 * 420 * a3 * 2 + 210 * 297 * a4) * 0.000001;
}