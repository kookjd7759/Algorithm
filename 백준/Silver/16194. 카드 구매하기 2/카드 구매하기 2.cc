#include <iostream>

using namespace std;

int OriPrice[1001]{};
int DP[1001]{};
int N;

void Input() {
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> OriPrice[i];
}

void FirstResetDP() {
	for (int i = 1; i <= N; i++)
		DP[i] = OriPrice[i] + OriPrice[N - i];
}

void ResetDP() {
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= i; j++)
			DP[i] = min(DP[i], DP[i - j] + OriPrice[j]);
}

int main() {
	Input();
	FirstResetDP();
	ResetDP();

	cout << DP[N];
}