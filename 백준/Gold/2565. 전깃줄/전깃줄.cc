#include <iostream>

using namespace std;

int arr[501]{}, DP[501]{};
int Size;

void Input() {
	cin >> Size;

	for (int i = 0; i < Size; i++) {
		int index; cin >> index;
		cin >> arr[index];
		DP[index] = 1;
	}
}

void Function() {
	for (int i = 1; i < 501; i++)
		for (int j = 1; j < i; j++)
			if (arr[i] > arr[j] && arr[i] != 0)
				DP[i] = max(DP[i], DP[j] + 1);
}

void PrintResult() {
	int Max = DP[1];
	for (int i = 2; i < 501; i++)
		Max = max(Max, DP[i]);

	cout << Size - Max;
}

int main() {
	Input();
	Function();
	PrintResult();/*
	cout << "\n\n";
	for (int i = 0; i <= 10; i++)
		cout << arr[i] << " ";
	cout << "\n\n";
	for (int i = 0; i <= 10; i++)
		cout << DP[i] << " ";*/
}