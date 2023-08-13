#include <iostream>
#include <cmath>

using namespace std;

int N, r, c;
int Result = 0;

void Input() {
	cin >> N >> r >> c;
}

void Function(pair<int, int> LU_xy, int Size) {
	int NewSize = Size / 2;
	if (Size == 1)
		return;

	if (c < LU_xy.first + NewSize && r < LU_xy.second + NewSize) {
		Result += ((Size * Size) / 4) * 0;
		Function(pair<int, int>(LU_xy.first, LU_xy.second), NewSize);
	}
	else if (c < LU_xy.first + NewSize && r >= LU_xy.second + NewSize) {
		Result += ((Size * Size) / 4) * 2;
		Function(pair<int, int>(LU_xy.first, LU_xy.second + NewSize), NewSize);
	}
	else if (c >= LU_xy.first + NewSize && r < LU_xy.second + NewSize) {
		Result += ((Size * Size) / 4) * 1;
		Function(pair<int, int>(LU_xy.first + NewSize, LU_xy.second), NewSize);
	}
	else {
		Result += ((Size * Size) / 4) * 3;
		Function(pair<int, int>(LU_xy.first + NewSize, LU_xy.second + NewSize), NewSize);
	}
}

int main() {
	Input();
	int Size = pow(2, N);
	Function(pair<int, int>(0, 0), Size);
	cout << Result;
}