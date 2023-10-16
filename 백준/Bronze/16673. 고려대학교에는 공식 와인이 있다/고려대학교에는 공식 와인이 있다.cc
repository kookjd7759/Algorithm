#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int C, K, P; cin >> C >> K >> P;
	int sum(0);
	for (int n = 1; n <= C; n++)
		sum += K * n + P * n * n;
	cout << sum;
}