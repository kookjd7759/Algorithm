#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(6);
	double k, d1, d2; cin >> k >> d1 >> d2;
	double n = (max(d1, d2) - min(d1, d2)) / 2.0;
	cout << k * k - n * n;
}