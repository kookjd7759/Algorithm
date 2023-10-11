#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	int k; cin >> k;
	double fe = ((double)k / 100.0) + 25.0;
	if (fe < 100) fe = 100;
	if (fe > 2000) fe = 2000;
	cout << fe;
}
