#include <iostream>

using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int m = a * b, p = c * d;
	if (m == p) cout << "E";
	else m > p ? cout << "M" : cout << "P";
}