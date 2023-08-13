#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int* arr, * DP;
int Size;

void Input() {
	cin >> Size;
	arr = new int[Size];
	DP = new int[Size];

	for (int i = 0; i < Size; i++)
		cin >> arr[i];

	fill_n(DP, Size, 1);
}

void Function() {
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				DP[i] = max(DP[i], DP[j] + 1);
		}
	}
}

int PrintResult() {
	int Max = 0;
	for (int i = 0; i < Size; i++) 
		Max = max(Max, DP[i]);

	return Max;
}

int main() {
	Input();
	Function();
	cout << PrintResult();
}