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
	bool broken;
};

int main() {
	Sync;

	int n, m; cin >> n >> m;
	vector<vector<char>> board(n, vector<char>(m));
	vector<vector<vector<bool>>> visit(n, vector(m, vector<bool>(2, false)));
	vector<vector<vector<int>>> result(n, vector(m, vector<int>(2, -1)));
	for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
		cin >> board[i][j];

	queue<State> que; que.push({ 0, 1, false });
	visit[0][0][0] = true; result[0][0][0] = 1;
	while (!que.empty()) {
		int x = que.front().pos / m;
		int y = que.front().pos % m;
		int depth = que.front().depth;
		bool broken = que.front().broken;
		que.pop();

		for (int i = 0; i < 4; ++i) {
			int x_nxt = x + dir[i][0];
			int y_nxt = y + dir[i][1];
			bool broken_nxt = broken;
			if (x_nxt < 0 || y_nxt < 0 || x_nxt >= n || y_nxt >= m) continue;
			
			if (board[x_nxt][y_nxt] == '1') {
				if (broken) continue;
				broken_nxt = true;
			}
			if (visit[x_nxt][y_nxt][(int)broken_nxt]) continue;

			que.push({ x_nxt * m + y_nxt, depth + 1, broken_nxt });
			visit[x_nxt][y_nxt][(int)broken_nxt] = true;
			result[x_nxt][y_nxt][(int)broken_nxt] = depth + 1;
		}
	}

	if (result[n - 1][m - 1][0] == -1 || result[n - 1][m - 1][1] == -1)
		cout << max(result[n - 1][m - 1][0], result[n - 1][m - 1][1]);
	else
		cout << min(result[n - 1][m - 1][0], result[n - 1][m - 1][1]);

	return 0;
}
