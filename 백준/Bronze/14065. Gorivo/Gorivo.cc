#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed; cout.precision(9);
	double x; cin >> x;
	x *= 1609.344; x/= 3.785411784;
	cout << 100.0 / x * 1000;
}