#include <iostream>

using namespace std;

int N, M;
int DP[1000002]{};

void Input() {
	cin >> N >> M;
	int num; cin >> num;
	DP[1] = num;
	
	for (int i = 2; i <= N; i++) {
		cin >> num;
		DP[i] += DP[i - 1] + num;
	}
}

void Funtion() {
	while (M--) {
		int i, j; cin >> i >> j;
		cout << DP[j] - DP[i - 1] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Funtion();
}