#include <iostream> 

#define mod 15746

using namespace std;

int main() {

	int n;
	cin >> n;
	int* dp = new int[n + 1];

	dp[1] = 1 % mod;
	dp[2] = 2 % mod;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % mod;
	}

	cout << dp[n] << "\n";

	return 0;
}