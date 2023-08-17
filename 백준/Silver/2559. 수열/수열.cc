#include <iostream>

using namespace std;

int N, K;
int DP[100002]{};

void Input() {
	DP[0] = 0;
	cin >> N >> K;
	int num; cin >> num;
	DP[1] = num;

	for (int i = 2; i <= N; i++) {
		cin >> num;
		DP[i] += DP[i - 1] + num;
	}
}

void Funtion() {
	int max = -99999999;
	for (int i = K; i <= N; i++) {
		if (max < DP[i] - DP[i - K])
			max = DP[i] - DP[i - K];
	}

	cout << max;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Funtion();
}