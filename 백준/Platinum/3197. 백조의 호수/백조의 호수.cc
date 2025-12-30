#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moves[4][2]{ {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

int main() {
	Sync;

	int R, C; cin >> R >> C;
	int target_pos[2], idx(0);
	vector<vector<char>> board(R, vector<char>(C));
	for (int i = 0; i < R; ++i) for (int j = 0; j < C; ++j) {
		cin >> board[i][j];
		if (board[i][j] == 'L') {
			target_pos[idx++] = i * C + j;
			board[i][j] = '.';
		}
	}

	// ICE
	queue<pair<int, int>> edge; // pos, depth
	vector<vector<int>> days(R, vector<int>(C, 0));
	vector<vector<bool>> visit(R, vector<bool>(C, false));

	// check the edge ice
	for (int i = 0; i < R; ++i) for (int j = 0; j < C; ++j)
		if (board[i][j] == 'X') {
			bool isEdge = false;
			for (int d = 0; d < 4; ++d) {
				int nx = i + moves[d][0];
				int ny = j + moves[d][1];
				if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
				if (board[nx][ny] == '.') {
					isEdge = true;
					break;
				}
			}
			if (isEdge) {
				edge.push(make_pair(i * C + j, 1));
				days[i][j] = 1;
				visit[i][j] = true;
			}
		}

	// calculate the days 
	while (!edge.empty()) {
		int x = edge.front().first / C;
		int y = edge.front().first % C;
		int depth = edge.front().second;
		edge.pop();

		for (int d = 0; d < 4; ++d) {
			int nx = x + moves[d][0];
			int ny = y + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
			if (visit[nx][ny]) continue;
			if (board[nx][ny] == '.') continue;

			edge.push(make_pair(nx * C + ny, depth + 1));
			days[nx][ny] = depth + 1;
			visit[nx][ny] = true;
		}
	}
	/*
	// for Debug
	cout << "\n[Days]\n";
	for (int i = 0; i < R; ++i) {
		for (int j = 0; j < C; ++j)
			cout << days[i][j] << ' ';
		cout << "\n";
	}
	cout << "\n[target position]\n";
	cout << target_pos[0] / C << ' ' << target_pos[0] % C << "\n";
	cout << target_pos[1] / C << ' ' << target_pos[1] % C << "\n";
	cout << "\n";
	*/
	// solve
	visit.assign(R, vector<bool>(C, false));
	vector<vector<int>> team_map(R, vector<int>(C, -1));
	queue<pair<int, int>> que_cur; // pos, team
	queue<pair<int, int>> que_nxt; // pos, team
	for (int i = 0; i < 2; ++i) {
		que_cur.push(make_pair(target_pos[i], i));
		visit[target_pos[i] / C][target_pos[i] % C] = true;
		team_map[target_pos[i] / C][target_pos[i] % C] = i;
	}
	int ans(0), idle_count(0);

	while (true) {
		int x = que_cur.front().first / C;
		int y = que_cur.front().first % C;
		int team = que_cur.front().second;
		que_cur.pop();

		for (int d = 0; d < 4; ++d) {
			int nx = x + moves[d][0];
			int ny = y + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
			if (ans < days[nx][ny]) {
				if (ans + 1 == days[nx][ny] && !visit[nx][ny]) {
					que_nxt.push(make_pair(nx * C + ny, team));
					visit[nx][ny] = true;
					team_map[nx][ny] = team;
				}
				continue;
			}
			if (visit[nx][ny]) {
				if (team_map[nx][ny] != team) {
					//cout << "FIND !! -> ";
					cout << ans;
					return 0;
				}
				continue;
			}

			que_cur.push(make_pair(nx * C + ny, team));
			visit[nx][ny] = true;
			team_map[nx][ny] = team;
		}
		if (que_cur.empty()) {
			while (!que_nxt.empty()) {
				que_cur.push(que_nxt.front());
				que_nxt.pop();
			}
			ans++;
		}
	}


	return 0;
}
