#include <iostream>
#include <array>

using namespace std;

array<int64_t, 2> Arr;

int64_t Func(int size) {
	for (int i = 1; i < size; i++) {
		if (i % 2 == 1)
			Arr[0] += Arr[1];
		else
			Arr[1] += Arr[0];
	}

	if (Arr[0] > Arr[1])
		return Arr[0];
	else
		return Arr[1];
}

int main() {
	Arr[0] = 0;
	Arr[1] = 1;
	int size; cin >> size;
	cout << Func(size);

	return 0;
} 