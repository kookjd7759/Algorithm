#include<iostream>

using namespace std;

int main() {
	long int n; cin >> n;
	float num = ((float)n - 1) / 6;
	int i = 0, num1 = 0;

	while (true) {
		num1 += i;
		if (num <= num1)
			break;

		i++;
	}
	cout << ++i;
}