#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	int num1, num2;
	if (b % d != 0)
		num1 = b / d + 1;
	else
		num1 = b / d;

	if (c % e != 0)
		num2 = c / e + 1;
	else
		num2 = c / e;

	cout << a - max(num1, num2);
}