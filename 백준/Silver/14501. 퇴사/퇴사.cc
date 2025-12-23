#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n; cin >> n;
	int* dp = new int[n + 1]; memset(dp, 0, sizeof(int) * (n + 1));
	pair<int, int>* arr = new pair<int, int>[n];
	for (int i = 0; i < n; ++i) cin >> arr[i].first >> arr[i].second;
	
	for (int i = 0; i < n; ++i) {
		int t = arr[i].first;
		if (i + t <= n) dp[i + t] = max(dp[i + t], dp[i] + arr[i].second);
		if (i + 1 <= n) dp[i + 1] = max(dp[i + 1], dp[i]);
	}

	int maxi(-1);
	for (int i = 0; i < n + 1; ++i) maxi = max(maxi, dp[i]); 
	cout << maxi;

	delete[] dp;
	delete[] arr;

	return 0;
}
