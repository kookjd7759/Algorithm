#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[4][2]{ {1,0}, {-1,0}, {0,1}, {0,-1} };

struct State {
	int pos;
	int depth;
	int broken;
	bool canDig;
};

int main() {
	Sync;

	int n, m, k; cin >> n >> m >> k;
	vector<vector<char>> board(n, vector<char>(m));
	vector<vector<vector<bool>>> visit(n, vector(m, vector<bool>(k + 1, false)));
	vector<vector<vector<int>>> result(n, vector(m, vector<int>(k + 1, -1)));
	for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
		cin >> board[i][j];

	queue<State> que; que.push({ 0, 1, 0, true });
	visit[0][0][0] = true; result[0][0][0] = 1;
	while (!que.empty()) {
		int x = que.front().pos / m;
		int y = que.front().pos % m;
		int depth = que.front().depth;
		int broken = que.front().broken;
		bool canDig = que.front().canDig;
		que.pop();

		for (int i = 0; i < 4; ++i) {
			int x_nxt = x + dir[i][0];
			int y_nxt = y + dir[i][1];
			int broken_nxt = broken;
			bool canDig_nxt = !canDig;

			if (x_nxt < 0 || y_nxt < 0 || x_nxt >= n || y_nxt >= m) continue;

			if (board[x_nxt][y_nxt] == '1') {
				broken_nxt++;
				if (broken + 1 > k) continue;
				if (!canDig) {
					que.push({ x * m + y, depth + 1, broken, canDig_nxt });
					continue;
				}
			}
			if (visit[x_nxt][y_nxt][broken_nxt]) continue;

			que.push({ x_nxt * m + y_nxt, depth + 1, broken_nxt, canDig_nxt });
			visit[x_nxt][y_nxt][broken_nxt] = true;
			result[x_nxt][y_nxt][broken_nxt] = depth + 1;
		}
	}

	int ans(2e9);
	bool isFalse = true;
	for (int i = 0; i <= k; ++i) {
		if (result[n - 1][m - 1][i] != -1) {
			ans = min(ans, result[n - 1][m - 1][i]);
			isFalse = false;
		}
	}

	cout << (isFalse ? -1 : ans);

	return 0;
}
