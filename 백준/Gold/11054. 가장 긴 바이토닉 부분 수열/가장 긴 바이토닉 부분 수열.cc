#include <iostream>

using namespace std;

struct DP {
	int UP = 1;
	int DOWN = 1;
};

struct DP* dp;
int* arr;
int Size;

void Input() {
	cin >> Size;
	arr = new int[Size];
	dp = new struct DP[Size];

	for (int i = 0; i < Size; i++)
		cin >> arr[i];
}

void Function() {
	for (int i = 1; i < Size; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i].UP = max(dp[j].UP + 1, dp[i].UP);
		}
	}

	for (int i = 1; i < Size; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j])
				dp[i].DOWN = max(max(dp[j].UP + 1, dp[j].DOWN + 1), dp[i].DOWN);
		}
	}
}

int PrintResult() {
	int Max = -10000;
	for (int i = 0; i < Size; i++)
		Max = max(max(dp[i].DOWN, dp[i].UP), Max);

	return Max;
}

int main() {
	Input();
	Function();
	cout << PrintResult();
}