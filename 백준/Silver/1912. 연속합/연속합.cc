#include <iostream>

using namespace std;

int* arr, * DP;
int Size, Max;

void Input() {
	cin >> Size;
	arr = new int[Size];
	DP = new int[Size];

	for (int i = 0; i < Size; i++)
		cin >> arr[i];

	DP[0] = arr[0];
	Max = DP[0];
}

void Function() {
	for (int i = 1; i < Size; i++) {
		DP[i] = max(arr[i] + DP[i - 1], arr[i]);
		Max = max(Max, DP[i]);
	}
}

int main() {
	Input();
	Function();
	cout << Max;
}