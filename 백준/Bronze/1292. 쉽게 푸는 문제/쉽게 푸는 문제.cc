#include <iostream>

using namespace std;

int dp[1005];

int main() {
	dp[0] = 0;
	int num(1);
	for (int i = 1; i < 1005;) {
		for (int j = 0; j < num; j++, i++) 
			dp[i] = num + dp[i - 1];
		num++;
	}

	int a, b; cin >> a >> b;
	cout << dp[b] - dp[a - 1];
}