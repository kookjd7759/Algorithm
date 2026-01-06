#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moves[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };

int main() {
	Sync;
	int N, M, P; cin >> N >> M >> P;
	vector<vector<char>> board(N, vector<char>(M));
	vector<int> power(P + 1);
	for (int i = 1; i <= P; ++i) cin >> power[i];
	for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j)
		cin >> board[i][j];

	vector<queue<int>> que(P + 1);
	for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) {
		if (board[i][j] == '.' || board[i][j] == '#') continue;

		int player = board[i][j] - '0';
		bool isEdge = false;
		for (int d = 0; d < 4; ++d) {
			int nx = i + moves[d][0];
			int ny = j + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] == '.') {
				isEdge = true;
				break;
			}
		}
		if (isEdge) que[player].push(i * M + j);
	}

	while (true) {
		bool isEnd = true;
		for (int player = 1; player <= P; ++player) {
			queue<pair<int, int>> tmp;
			while (!que[player].empty()) {
				tmp.push(make_pair(que[player].front(), 0));
				que[player].pop();
			}

			while (!tmp.empty()) {
				int x = tmp.front().first / M;
				int y = tmp.front().first % M;
				int depth = tmp.front().second;
				tmp.pop();

				if (depth == power[player]) {
					que[player].push(x * M + y);
					continue;
				}

				for (int d = 0; d < 4; ++d) {
					int nx = x + moves[d][0];
					int ny = y + moves[d][1];
					if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
					if (board[nx][ny] != '.') continue;

					tmp.push(make_pair(nx * M + ny, depth + 1));
					board[nx][ny] = (char)('0' + player);
					isEnd = false;
				}
			}
		}
		if (isEnd) break;
	}
	
	vector<int> score(P + 1, 0);
	for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j){
		if (board[i][j] == '.' || board[i][j] == '#') continue;
		score[board[i][j] - '0']++;
	}

	for (int player = 1; player <= P; ++player)
		cout << score[player] << ' ';

	return 0;
}
