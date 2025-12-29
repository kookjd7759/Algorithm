#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

int main() {
	Sync;

	int N; cin >> N;
	vector<vector<char>> board(N, vector<char>(N));
	vector<vector<bool>> visit(N, vector<bool>(N, false)); 
	vector<vector<int>> group_info(N, vector<int>(N, 0));
	vector<vector<int>> depth_info(N, vector<int>(N, 0));
	for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j)
		cin >> board[i][j];

	int group(1);
	for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j)
		if (board[i][j] == '1' && !visit[i][j]) {
			queue<int> que;
			que.push(i * N + j);
			visit[i][j] = true;
			group_info[i][j] = group;
			while (!que.empty()) {
				int x = que.front() / N;
				int y = que.front() % N;
				que.pop();
				for (int d = 0; d < 4; ++d) {
					int nx = x + dir[d][0];
					int ny = y + dir[d][1];
					if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
					if (board[nx][ny] == '0' || visit[nx][ny]) continue;

					que.push(nx * N + ny);
					visit[nx][ny] = true;
					group_info[nx][ny] = group;
				}
			}
			group++;
		}

	visit.assign(N, vector<bool>(N, false));
	struct State {
		int pos;
		int depth;
		int group;
	};
	queue<State> que;
	for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) {
		if (board[i][j] == '0') {
			bool isEdge = false;
			int group = -1;
			for (int d = 0; d < 4; ++d) {
				int nx = i + dir[d][0];
				int ny = j + dir[d][1];
				if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
				if (board[nx][ny] == '1') {
					isEdge = true;
					if (group != -1 && group_info[nx][ny] != group) {
						cout << '1';
						return 0;
					}
					else
						group = group_info[nx][ny];
				}
			}

			if (isEdge) {
				depth_info[i][j] = 1;
				group_info[i][j] = group;
				visit[i][j] = true;
				que.push({ i * N + j, 1, group });
			}
		}
	}

	int ans(2e9);
	while (!que.empty()) {
		int x = que.front().pos / N;
		int y = que.front().pos % N;
		int depth = que.front().depth;
		int group = que.front().group;
		que.pop();
		for (int d = 0; d < 4; ++d) {
			int nx = x + dir[d][0];
			int ny = y + dir[d][1];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (board[nx][ny] == '1') continue;
			if (visit[nx][ny]) {
				if (group_info[nx][ny] != group) {
					if (ans < depth + depth_info[nx][ny]) continue;
					ans = depth + depth_info[nx][ny];
				}
				else continue;
			}
			que.push({ nx * N + ny, depth + 1, group });
			depth_info[nx][ny] = depth + 1;
			group_info[nx][ny] = group;
			visit[nx][ny] = true;
		}
	}
	cout << ans;

	return 0;
}
