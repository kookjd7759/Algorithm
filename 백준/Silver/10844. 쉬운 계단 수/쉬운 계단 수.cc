#include <iostream>

using namespace std;

class StairNumber {
private:
	int64_t Result = 9;
	int64_t Number[10]{};
	int N;

public:
	void Input() {
		cin >> N;

		for (int i = 1; i < 10; i++)
			Number[i] = 1;
	}

	void Funtion() {
		for (int i = 1; i < N; i++) {
			int64_t tempNumber[10]{};
			Result = 0;

			tempNumber[1] += Number[0];
			tempNumber[8] += Number[9];
			for (int j = 1; j < 9; j++) {
				tempNumber[j - 1] += Number[j];
				tempNumber[j + 1] += Number[j];
			}

			for (int j = 0; j < 10; j++) {
				Number[j] = tempNumber[j] % 1000000000;
				Result += Number[j];
			}

			Result %= 1000000000;
		}
	}

	void PrintResult() { cout << Result; }
};

int main() {
	StairNumber stairnumber;
	stairnumber.Input();
	stairnumber.Funtion();
	stairnumber.PrintResult();

	return 0;
}