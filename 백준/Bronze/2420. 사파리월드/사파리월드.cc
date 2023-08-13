#include <iostream>

using namespace std;

long int my_abs(long int n) {
	if (n < 0)
		n *= -1;
	return n;
}

int main() {
	long int sum = 0;
	int num1, num2; cin >> num1 >> num2;
	sum = num1;
	sum -= num2;

	cout << my_abs(sum);
}