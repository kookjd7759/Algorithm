#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;

	if (N % 5 == 0) {
		cout << N / 5;
		return 0;
	}
	else {
		for (int i = N / 5; i > 0; i--) {
			if ((N - (5 * i)) % 3 == 0) {
				cout << (i + (N - (i * 5)) / 3);
				return 0;
			}
		}

		if (N % 3 == 0) {
			cout << N / 3;
			return 0;
		}
	}

	cout << -1;
}