#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int W, H;

void cal_step(const vector<vector<char>>& board, vector<vector<int>>& steps, const vector<int>& pos_vec) {
	vector<vector<bool>> visit(H, vector<bool>(W, false));

	queue<pair<int, int>> que;
	for (const int& pos : pos_vec) {
		que.push(make_pair(pos, 0));
		visit[pos / W][pos % W] = true;
		steps[pos / W][pos % W] = 0;
	}
	while (!que.empty()) {
		int x = que.front().first / W;
		int y = que.front().first % W;
		int depth = que.front().second;
		que.pop();

		for (int d = 0; d < 4; ++d) {
			int x_nxt = x + dir[d][0];
			int y_nxt = y + dir[d][1];
			int depth_nxt = depth;
			if (x_nxt < 0 || y_nxt < 0 || x_nxt >= H || y_nxt >= W) continue;
			if (board[x_nxt][y_nxt] == '#') continue;
			if (visit[x_nxt][y_nxt]) continue;

			que.push(make_pair(x_nxt * W + y_nxt, depth_nxt + 1));
			visit[x_nxt][y_nxt] = true;
			steps[x_nxt][y_nxt] = depth_nxt + 1;
		}
	}
}

int main() {
	Sync;

	cin >> H >> W;
	vector<vector<char>> board(H, vector<char>(W));
	vector<vector<int>> fire_steps(H, vector<int>(W, -1));
	vector<vector<int>> you_steps(H, vector<int>(W, -1));
	vector<int> pos_fire_vec, pos_you_vec;

	for (int i = 0; i < H; ++i) for (int j = 0; j < W; ++j) {
		cin >> board[i][j];
		if (board[i][j] == 'F') pos_fire_vec.push_back(i * W + j);
		if (board[i][j] == 'J') pos_you_vec.push_back(i * W + j);
	}

	cal_step(board, fire_steps, pos_fire_vec);
	cal_step(board, you_steps, pos_you_vec);

	vector<vector<bool>> visit(H, vector<bool>(W, false));

	queue<pair<int, int>> que;
	que.push(make_pair(pos_you_vec[0], 0));
	visit[pos_you_vec[0] / W][pos_you_vec[0] % W] = true;
	bool isEscape = false;
	while (!que.empty()) {
		int x = que.front().first / W;
		int y = que.front().first % W;
		int depth = que.front().second;
		que.pop();
		for (int d = 0; d < 4; ++d) {
			int x_nxt = x + dir[d][0];
			int y_nxt = y + dir[d][1];
			if (x_nxt < 0 || y_nxt < 0 || x_nxt >= H || y_nxt >= W) {
				cout << depth + 1 << "\n";
				isEscape = true;
				break;
			}
			if (board[x_nxt][y_nxt] == '#') continue;
			if (visit[x_nxt][y_nxt]) continue;
			if (fire_steps[x_nxt][y_nxt] != -1 && you_steps[x_nxt][y_nxt] >= fire_steps[x_nxt][y_nxt]) continue;

			que.push(make_pair(x_nxt * W + y_nxt, depth + 1));
			visit[x_nxt][y_nxt] = true;
		}

		if (isEscape) break;
	}

	if (!isEscape) cout << "IMPOSSIBLE\n";

	return 0;
}
