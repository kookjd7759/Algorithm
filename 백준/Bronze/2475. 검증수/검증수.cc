#include <iostream>

using namespace std;

int main() {
	int Sum = 0;
	for (int i = 0; i < 5; i++) {
		int num; cin >> num;
		Sum += num * num;
	}

	cout << Sum % 10;

	return 0;
}