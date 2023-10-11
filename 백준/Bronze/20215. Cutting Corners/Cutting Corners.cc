#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed; cout.precision(10);
	int x, y; cin >> x >> y;
	cout << (x + y) - sqrt((x * x) + (y * y));
}