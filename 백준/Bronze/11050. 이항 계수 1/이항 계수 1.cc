#include <iostream>

using namespace std;

int Fac(int num) {
	int ans = 1;
	for (int i = 2; i <= num; i++)
		ans *= i;
	return ans;
}

int main() {
	int N, K; cin >> N >> K;
	cout << Fac(N) / (Fac(K) * Fac(N - K));

	return 0;
}