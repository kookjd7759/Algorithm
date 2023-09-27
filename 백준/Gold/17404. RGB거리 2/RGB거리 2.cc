#include <iostream>

using namespace std;

int arr[1001][3];
int DP[1001][3];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int ret = 1e9;
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

	for (int rgb = 0; rgb <= 2; rgb++) {
		for (int i = 0; i <= 2; i++) {
			if (rgb == i)
				DP[1][i] = arr[1][i];
			else
				DP[1][i] = 1e9;
		}

		for (int i = 2; i <= N; i++) {
			DP[i][0] = arr[i][0] + min(DP[i - 1][1], DP[i - 1][2]);
			DP[i][1] = arr[i][1] + min(DP[i - 1][0], DP[i - 1][2]);
			DP[i][2] = arr[i][2] + min(DP[i - 1][0], DP[i - 1][1]);
		}

		for (int i = 0; i <= 2; i++) {
			if (i == rgb) continue;
			else ret = min(ret, DP[N][i]);
		}
	}
	cout << ret;
}