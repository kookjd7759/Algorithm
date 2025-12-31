#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moves[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

char board[5][5];
bool selected[5][5];
bool visited[5][5];
int parent = 0;
int ans = 0;

int bfs_check() {
	memset(visited, false, sizeof(visited));
	queue<int> que; que.push(parent);
	visited[parent / 5][parent % 5] = true;
	int count(1);
	while (!que.empty()) {
		int x = que.front() / 5;
		int y = que.front() % 5;
		que.pop();

		for (int d = 0; d < 4; ++d) {
			int nx = x + moves[d][0];
			int ny = y + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
			if (!selected[nx][ny] || visited[nx][ny]) continue;

			que.push(nx * 5 + ny);
			visited[nx][ny] = true;
			count++;
		}
	}

	return (int)(count == 7);
}

void dfs(int depth, int start, int yCount) {
	if (depth == 7) {
		ans += bfs_check();
		return;
	}

	for (int i = start; i < 25; ++i) {
		int nx = i / 5;
		int ny = i % 5;
		int nyCount = yCount;

		if (depth == 0) parent = i;
		if (board[nx][ny] == 'Y') nyCount++;
		if (nyCount > 3) continue;
		selected[nx][ny] = true;

		dfs(depth + 1, i + 1, nyCount);

		selected[nx][ny] = false;
	}
}

int main() {
	Sync;

	for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j)
		cin >> board[i][j];
	memset(selected, false, sizeof(selected));
	dfs(0, 0, 0);
	cout << ans;

	return 0;
}
