#include <iostream>

using namespace std;

int main() {
	int total; cin >> total;
	int size; cin >> size;
	int sum = 0;

	for (int i = 0; i < size; i++) {
		int price; cin >> price;
		int number; cin >> number;
		sum += price * number;
	}

	total == sum ? cout << "Yes" : cout << "No";
}