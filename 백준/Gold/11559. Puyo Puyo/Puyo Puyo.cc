#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int width = 6;
const int height = 12;
const int moves[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

vector<vector<char>> board(12, vector<char>(6));
bool bang_once() {
	// find 
	vector<vector<bool>> visited(12, vector<bool>(6, false));
	vector<int> positions;
	for (int i = 0; i < height; ++i) for (int j = 0; j < width; ++j) {
		visited[i][j] = true;
		if (board[i][j] != '.') {
			char target = board[i][j];
			vector<int> vec; vec.push_back(i * width + j);
			queue<int> que; que.push(i * width + j);
			while (!que.empty()) {
				int x = que.front() / width;
				int y = que.front() % width;
				que.pop();
				
				for (int d = 0; d < 4; ++d) {
					int nx = x + moves[d][0];
					int ny = y + moves[d][1];
					if (nx < 0 || ny < 0 || nx >= height || ny >= width) continue;
					if (visited[nx][ny]) continue;
					if (target != board[nx][ny]) continue;

					que.push(nx * width + ny);
					visited[nx][ny] = true;
					vec.push_back(nx * width + ny);
				}
			}

			if (vec.size() >= 4) positions.insert(positions.begin(), vec.begin(), vec.end());
		}
	}

	// bang
	bool isBang = false;
	for (const int pos : positions) {
		int x = pos / width;
		int y = pos % width;
		board[x][y] = '.';
		isBang = true;
	}
	if (!isBang) return false;

	// gravity
	for (int w = 0; w < width; ++w) {
		int ground(height - 1);
		for (int pointer = height - 1; pointer >= 0; --pointer) {
			if (board[pointer][w] == '.') continue;
			board[ground][w] = board[pointer][w];
			if (ground != pointer) board[pointer][w] = '.';
			ground--;
		}
	}

	return true;
}

int main() {
	Sync;

	for (int i = 0; i < height; ++i) for (int j = 0; j < width; ++j)
		cin >> board[i][j];

	int ans(0);
	while (true) {
		if (!bang_once()) break;
		ans++;
	}
	cout << ans;

	return 0;
}
