#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int t; cin >> t;

	c += t;
	int temp = c / 60;
	c %= 60;

	b += temp;
	temp = b / 60;
	b %= 60;

	a += temp;
	while (a >= 24)
		a -= 24;

	cout << a << " " << b << " " << c;
}