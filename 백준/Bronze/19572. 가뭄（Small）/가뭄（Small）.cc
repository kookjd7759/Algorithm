#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(1);
	int d1, d2, d3; cin >> d1 >> d2 >> d3;
	double a = (d1 + d2 - d3) / 2.0;
	double b = d1 - a;
	double c = d2 - a;
	if (a <= 0.0 || b <= 0.0 || c <= 0.0) cout << "-1\n";
	else cout << "1\n" << a << " " << b << " " << c;
}