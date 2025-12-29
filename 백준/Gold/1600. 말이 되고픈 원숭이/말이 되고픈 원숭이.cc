#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int nightMoves[8][2]{
	{-1, -2}, {1, -2},
	{-2, -1}, {2, -1},
	{-2,  1}, {2,  1},
	{-1,  2}, {1,  2}
};
const int normalMoves[4][2]{ {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

struct Node {
	int pos;
	int depth;
	int moves;
};

int main() {
	Sync;

	int K, W, H; cin >> K >> W >> H;
	vector<vector<char>> board(H, vector<char>(W));
	vector<vector<vector<bool>>> visit(H, vector<vector<bool>>(W, vector<bool>(K + 1, false)));
	for (int i = 0; i < H; ++i) for (int j = 0; j < W; ++j)
		cin >> board[i][j];

	queue<Node> que;
	que.push({0, 0, K});
	visit[0][0][K] = true;
	int ans(2e9);
	while (!que.empty()) {
		int x = que.front().pos / W;
		int y = que.front().pos % W;
		int depth = que.front().depth;
		int moves = que.front().moves;
		que.pop();

		if (x == H - 1 && y == W - 1) {
			ans = min(ans, depth);
			continue;
		}

		if (moves > 0) {
			for (int d = 0; d < 8; ++d) {
				int nx = x + nightMoves[d][0];
				int ny = y + nightMoves[d][1];
				if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
				if (board[nx][ny] == '1') continue;
				if (visit[nx][ny][moves - 1]) continue;
				
				que.push({ nx * W + ny, depth + 1, moves - 1 });
				visit[nx][ny][moves - 1] = true;
			}
		}
		for (int d = 0; d < 4; ++d) {
			int nx = x + normalMoves[d][0];
			int ny = y + normalMoves[d][1];
			if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
			if (board[nx][ny] == '1') continue;
			if (visit[nx][ny][moves]) continue;

			que.push({ nx * W + ny, depth + 1, moves });
			visit[nx][ny][moves] = true;
		}
	}
	cout << (ans == 2e9 ? -1 : ans);

	return 0;
}
