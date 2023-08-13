#include <iostream>

using namespace std;

class MakeOne {
private:
	int N;
	int * arr;

public:
	void Input() {
		cin >> N;
		arr = new int[N + 1];
	}

	void Function() {
		arr[1] = 0;

		for (int i = 2; i <= N; i++) {
			arr[i] = arr[i - 1] + 1;

			if (i % 2 == 0)
				arr[i] = min(arr[i], arr[i / 2] + 1);

			if (i % 3 == 0)
				arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	void PrintResult() {
		cout << arr[N];
	}
};

int main() {
	MakeOne makeone;
	makeone.Input();
	makeone.Function();
	makeone.PrintResult();

	return 0;
}