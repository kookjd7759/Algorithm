#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int count = 0;
	int sum = a + b + c;
	if (a == b)
		count++;
	if (a == c)
		count++;
	if (b == c)
		count++;

	if (count == 3 and a == 60)
		cout << "Equilateral";
	else if (count == 1 and sum == 180)
		cout << "Isosceles";
	else if (count == 0 and sum == 180)
		cout << "Scalene";
	else
		cout << "Error";
}