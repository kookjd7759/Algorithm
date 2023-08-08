#include <iostream>
#include <cmath>

int64_t Mobius[1000010];

using namespace std;

int K;
int K_ori;

void Create_Mobius() {
	Mobius[1] = 1;
	for (int i = 1; i <= 1000000; i++)
		for (int j = 2 * i; j <= 1000000; j += i)
			Mobius[j] -= Mobius[i];
}

int Cal(int num) {
	int64_t Sum = 0;
	for (int64_t i = 1; i * i <= num; i++)
		Sum += Mobius[i] * (num / (i * i));

	return Sum;
}

void Function() {
	int PrevSum = 0, NowSum;

	while (true) {
		NowSum = K - Cal(K);

		if (NowSum == PrevSum)
			break;

		K = K_ori + NowSum;
		PrevSum = NowSum;
	}

	cout << K;
}

int main() {
	Create_Mobius();
	cin >> K; K_ori = K;
	Function();

	return 0;
}