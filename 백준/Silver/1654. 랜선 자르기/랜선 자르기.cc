#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int K, N;
int64_t ALLSum = 0;
array<int64_t, 10001> Arr;

void Input() {
	cin >> K >> N;

	for (int i = 0; i < K; i++) {
		cin >> Arr[i];
		ALLSum += Arr[i];
	}
}

int64_t Check(int64_t num) {
	int64_t Sum = 0;
	for (int i = 0; i < K; i++)
		Sum += Arr[i] / num;

	return Sum;
}

int Func() {
	int64_t Left = 1, Right = ALLSum / N, Mid;
	int64_t Sum;
	while (Left <= Right) {
		Mid = (Right + Left) >> 1;
		Sum = Check(Mid);

		if (Sum >= N)
			Left = Mid + 1;
		else // (Sum < N)
			Right = Mid - 1;
	}

	return Right;
}

int main() {
	Input();
	cout << Func();

	return 0;
}