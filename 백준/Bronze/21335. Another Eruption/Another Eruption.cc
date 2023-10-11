#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed; cout.precision(9);
	double a; cin >> a;
	double r = sqrt(a / 3.14159265358979);
	cout << r * 2.0 * 3.14159265358979;
}