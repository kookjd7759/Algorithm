#include <iostream>

using namespace std;
typedef long long ll;

ll DP[1025][1025];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, M; cin >> N >> M;
	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= N; j++)
			DP[i][j] = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int num; cin >> num;
			DP[i][j] = DP[i - 1][j] + DP[i][j - 1] + num - DP[i - 1][j - 1];
		}
	}
	/*
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) 
			cout << DP[i][j] << "\t";
		cout << "\n";
	}
	*/
	while (M--) {
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		/*
		cout << "DP[" << x2 << "][" << y2 << "] = " << DP[x2][y2] << "\n";

		cout << "DP[" << x1 - 1 << "][" << y2 << "] = " << DP[x1 - 1][y2] << "\n";

		cout << "DP[" << x2 << "][" << y1 - 1 << "] = " << DP[x2][y1 - 1] << "\n";

		cout << "DP[" << x1 - 1 << "][" << y1 - 1 << "] = " << DP[x1 - 1][y1 - 1] << "\n";
		*/
		cout << DP[x2][y2] - 
			(DP[x1 - 1][y2] + DP[x2][y1 - 1] - DP[x1 - 1][y1 - 1])
			<< "\n";
	}

}