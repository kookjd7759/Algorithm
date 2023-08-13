#include <iostream>

using namespace std;

int* arr, * DP;
int Size, Sum = 0;

void Input() {
	cin >> Size;
	arr = new int[Size];
	DP = new int[Size];

	for (int i = 0; i < Size; i++) {
		cin >> arr[i];
		Sum += arr[i];
	}
}

int FindDP(int index) {
	if (index >= 0)
		return DP[index];
	else
		return 0;
}

void Function() {
	for (int i = 0; i < Size; i++) 
		DP[i] = min(min(FindDP(i - 1) + arr[i], FindDP(i - 2) + arr[i]), FindDP(i - 3) + arr[i]);
}

void PrintResult() {
	if (Size < 3)
		cout << Sum;
	else 
		cout << Sum - min(min(DP[Size - 1], DP[Size - 2]), DP[Size - 3]);
}

int main() {
	Input();
	Function();
	PrintResult();
}