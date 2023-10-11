#include <iostream>

using namespace std;

int main() {
	int a, x, b, y, t; cin >> a >> x >> b >> y >> t;
	int ad, bd;
	t > 30 ? ad = (t - 30) * x : ad = 0;
	t > 45 ? bd = (t - 45) * y : bd = 0;
	cout << a + ad * 21 << "\n" << b + bd * 21;
}