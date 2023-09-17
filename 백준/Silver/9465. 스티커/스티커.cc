#include <iostream>

using namespace std;

int table[2][100001];
int DP[2][100001];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	table[0][0] = 0; table[1][0] = 0;

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < 2; i++)
			for (int j = 1; j <= n; j++)
				cin >> table[i][j];

		int ret(0);
		for (int j = 1; j <= n; j++)
			for (int i = 0; i < 2; i++) {
				int index = (int)!i;
				DP[i][j] = max(
					DP[index][j - 1] + table[i][j],
					DP[i][j - 1] - table[i][j - 1] + table[i][j]);
				ret = max(DP[i][j], ret);
			}
		cout << ret << "\n";
	}
}