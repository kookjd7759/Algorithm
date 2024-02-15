#include <iostream>

using namespace std;

int* stair, * DP, Size;

void Input() {
	stair = new int[Size];
	DP = new int[Size];

	for (int i = 0; i < Size; i++)
		cin >> stair[i];
}

int FindDP(int index) {
	if (index >= 0)
		return DP[index];
	else
		return 0;
}

void ResetDP() {
	DP[0] = stair[0];

	for (int i = 1; i < Size; i++) 
		DP[i] = max(FindDP(i - 2) + stair[i], FindDP(i - 3) + stair[i - 1] + stair[i]);
}

int main() {
	cin >> Size; 
	Input();
	ResetDP();

	cout << DP[Size - 1];
}