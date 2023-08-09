#include <iostream>

using namespace std;

int main() {
	long int sum = 0;
	for (int i = 0; i < 3; i++) {
		long int num; cin >> num;
		sum += num;
	}

	cout << sum;
}