#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[4][2]{ {1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main() {
	Sync;

	int n, m; cin >> n >> m;
	vector<vector<int>> board(n, vector<int>(m));
	vector<vector<bool>> visit(n, vector<bool>(m, false));
	for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j)
		cin >> board[i][j];

	int year(0);
	vector<vector<int>> board_nxt(n, vector<int>(m));
	while (true) {
		board_nxt = board;
		visit.assign(n, vector<bool>(m, false));

		int cnt(0);
		for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) {
			if (board[i][j] > 0 && !visit[i][j]) {
				queue<pair<int, int>> que;
				que.push(make_pair(i, j));
				visit[i][j] = true;
				cnt++;
				while (!que.empty()) {
					int x = que.front().first;
					int y = que.front().second;
					que.pop();

					for (int d = 0; d < 4; ++d) {
						int x_nxt = x + dir[d][0];
						int y_nxt = y + dir[d][1];
						if (x_nxt < 0 || y_nxt < 0 || x_nxt >= n || y_nxt >= m) continue;

						if (board[x_nxt][y_nxt] == 0) board_nxt[x][y] = max(0, board_nxt[x][y] - 1);
						else {
							if (!visit[x_nxt][y_nxt]) {
								que.push(make_pair(x_nxt, y_nxt));
								visit[x_nxt][y_nxt] = true;
							}
						}
					}
				}
			}
		}

		if (cnt == 0) {
			year = 0;
			break;
		}
		if (cnt >= 2) break;
		year++;
		board = board_nxt;
	}

	cout << year;

	return 0;
}
