#include <iostream>

using namespace std;

long int gcd(long int a, long int b) {
	long int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	long int a, b; cin >> a >> b;
	cout << a * b / gcd(a, b);
}