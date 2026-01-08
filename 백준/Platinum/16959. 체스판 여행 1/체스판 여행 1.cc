#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

enum Piece {
	NIGHT = 0,
	BISHOP,
	ROOK,
	PIECE_COUNT
};

struct Node {
	int pos;
	int depth;
	Piece piece;
	int haveToStep;
};

const int nightMove[8][2]{
	{-1, -2}, {1, -2},
	{-2, -1}, {2, -1},
	{-2, 1}, {2, 1},
	{-1, 2}, {1, 2}};
const int bishopMove[4][2]{ {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };
const int rookMove[4][2]{ {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

int main() {
	Sync;

	int N, start(-1); cin >> N;
	vector<int> position(N * N + 1, -1); // [number] = number's position
	vector<vector<vector<vector<int>>>> result
	(N, vector<vector<vector<int>>>(N, vector<vector<int>>(PIECE_COUNT, vector<int>(N * N + 2, 2e9))));
	vector<vector<vector<vector<bool>>>> visited
	(N, vector<vector<vector<bool>>>(N, vector<vector<bool>>(PIECE_COUNT, vector<bool>(N * N + 2, false))));
	for (int x = 0; x < N; ++x) for (int y = 0; y < N; ++y) {
		int num; cin >> num;
		position[num] = x * N + y;
	}

	int start_pos = position[1];
	int end_pos = position[N * N];
	int end_x = end_pos / N;
	int end_y = end_pos % N;
	queue<Node> que;
	for (Piece p = NIGHT; p < PIECE_COUNT; p = (Piece)(p + 1)) {
		que.push({ start_pos, 0, p, 2 });
		result[start_pos / N][start_pos % N][p][2] = 0;
		visited[start_pos / N][start_pos % N][p][2] = true;
	}
	int ans(2e9);
	while (!que.empty()) {
		int x = que.front().pos / N;
		int y = que.front().pos % N;
		int depth = que.front().depth;
		int haveToStep = que.front().haveToStep;
		Piece piece = que.front().piece;
		que.pop();

		if (haveToStep == N * N + 1) {
			ans = min(ans, depth);
			continue;
		}

		if (ans < depth + 1) continue;

		if (piece == NIGHT) {
			for (int d = 0; d < 8; ++d) {
				int nx = x + nightMove[d][0];
				int ny = y + nightMove[d][1];
				if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
				int nHaveToStep = haveToStep;
				if (nx * N + ny == position[haveToStep]) nHaveToStep++;
				if (visited[nx][ny][NIGHT][nHaveToStep]) continue;
				que.push({ nx * N + ny, depth + 1, NIGHT, nHaveToStep });
				visited[nx][ny][NIGHT][nHaveToStep] = true;
				result[nx][ny][NIGHT][nHaveToStep] = depth + 1;
			}
		}
		else {
			const int* moves[4];
			for (int d = 0; d < 4; ++d) 
				if (piece == BISHOP) moves[d] = bishopMove[d];
				else				 moves[d] = rookMove[d];

			for (int d = 0; d < 4; ++d) {
				int gap(1);
				while (true) {
					int nx = x + moves[d][0] * gap;
					int ny = y + moves[d][1] * gap;
					gap++;
					if (nx < 0 || ny < 0 || nx >= N || ny >= N) break;
					int nHaveToStep = haveToStep;
					if (nx * N + ny == position[haveToStep]) nHaveToStep++;
					if (visited[nx][ny][piece][nHaveToStep]) continue;
					que.push({ nx * N + ny, depth + 1, piece, nHaveToStep });
					visited[nx][ny][piece][nHaveToStep] = true;
					result[nx][ny][piece][nHaveToStep] = depth + 1;
				}
			}
		}

		for (Piece p = NIGHT; p < PIECE_COUNT; p = (Piece)(p + 1)) {
			if (!visited[x][y][p][haveToStep]) {
				que.push({ x * N + y, depth + 1, p, haveToStep });
				visited[x][y][p][haveToStep] = true;
				result[x][y][p][haveToStep] = depth + 1;
			}
		}
	}

	cout << ans;

	return 0;
}
