#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

enum Direction {
	NORTH = 0,
	EAST = 1,
	SOUTH = 2,
	WEST = 3
};

struct Robot { 
	int x;
	int y;
	Direction dir;

	pair<int, int> get_back() {
		if (dir == NORTH) return make_pair(x + 1, y);
		if (dir == EAST)  return make_pair(x, y - 1);
		if (dir == SOUTH) return make_pair(x - 1, y);
		if (dir == WEST)  return make_pair(x, y + 1);
	}
	pair<int, int> get_front() {
		if (dir == NORTH) return make_pair(x - 1, y);
		if (dir == EAST)  return make_pair(x, y + 1);
		if (dir == SOUTH) return make_pair(x + 1, y);
		if (dir == WEST)  return make_pair(x, y - 1);
	}
	void move_front() {
		if (dir == NORTH) x--;
		if (dir == EAST)  y++;
		if (dir == SOUTH) x++;
		if (dir == WEST)  y--;
	}
	void move_back() {
		if (dir == NORTH) x++;
		if (dir == EAST)  y--;
		if (dir == SOUTH) x--;
		if (dir == WEST)  y++;
	}
	void turn() { dir = (Direction)((4 + dir - 1) % 4); }
};
const int moves[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

int main() {
	Sync;

	int N, M; cin >> N >> M;
	Robot robot; cin >> robot.x >> robot.y;
	int dir; cin >> dir; robot.dir = (Direction)dir;

	vector<vector<char>> board(N, vector<char>(M));
	for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j)
		cin >> board[i][j];

	int clean(0);
	while (true) {
		if (board[robot.x][robot.y] == '0') {
			clean++;
			board[robot.x][robot.y] = '2';
		}

		bool check = false;
		for (int d = 0; d < 4; ++d) {
			int nx = robot.x + moves[d][0];
			int ny = robot.y + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] == '0') {
				check = true;
				break;
			}
		}

		if (!check) {
			pair<int, int> back = robot.get_back();
			int nx = back.first;
			int ny = back.second;
			if (nx < 0 || ny < 0 || nx >= N || ny >= M ||
				board[nx][ny] == '1')
				break;
			
			robot.move_back();
			continue;
		}

		robot.turn();

		pair<int, int> front = robot.get_front();
		int nx = front.first;
		int ny = front.second;
		if (nx < 0 || ny < 0 || nx >= N || ny >= M || board[nx][ny] != '0') continue;

		robot.move_front();
	}
	cout << clean;

	return 0;
}
