#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(10);
	double n;  cin >> n;
	cout << 100.0 / n << "\n" << 100.0 / (100.0 - n);
}