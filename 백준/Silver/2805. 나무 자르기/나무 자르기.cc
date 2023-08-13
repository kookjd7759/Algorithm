#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int N, M;
int Max = 0;
array<int, 1000002> Arr;

void Input() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> Arr[i];
		Max = max(Max, Arr[i]);
	}
}

int64_t Check(int64_t num) {
	int64_t Sum = 0;
	for (int i = 0; i < N; i++) {
		int64_t tempnum = Arr[i] - num;

		if (tempnum > 0)
			Sum += tempnum;
	}

	return Sum;
}

int Func() {
	int Left = 1, Right = Max, Mid;
	int64_t Sum = -1;
	if (N == 1)
		return (Arr[0] - M);
	else {
		while (Left <= Right) {
			Mid = (Right + Left) >> 1;
			Sum = Check(Mid);

			// cout << "Left : " << Left << "\n";
			// cout << "Mid : " << Mid << "\n";
			// cout << "Right : " << Right << "\n";
			// cout << "Sum : " << Sum << "\n\n";

			if (Sum >= M)
				Left = Mid + 1;
			else // (Sum < N)
				Right = Mid - 1;
		}

		// cout << "Left : " << Left << "\n";
		// cout << "Mid : " << Mid << "\n";
		// cout << "Right : " << Right << "\n";
		// cout << "Sum : " << Sum << "\n\n";

		return Right;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Input();
	cout << Func();

	return 0;
}