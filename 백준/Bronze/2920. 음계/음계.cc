#include <iostream>
#include <array>

using namespace std;

array<int, 8> Arr;

int main() {
	for (int i = 0; i < 8; i++) 
		cin >> Arr[i];

	bool A = false, D = false;
	for (int i = 0; i < 7; i++) {
		if (Arr[i] < Arr[i + 1])
			A = true;
		else if (Arr[i] > Arr[i + 1])
			D = true;
	}

	if (A && D)
		cout << "mixed";
	else if (A && !D)
		cout << "ascending";
	else
		cout << "descending";

	return 0;
}