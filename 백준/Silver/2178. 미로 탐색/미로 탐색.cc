#include <iostream>
#include <queue>

using namespace std;

int N, M;
bool ori_map[102][102]{};
bool visited_map[102][102]{};
int count_map[102][102]{};
pair<int, int> direction_xy[4] = {
	{-1, 0},
	{0, -1},
	{1, 0},
	{0, 1} };

void print_map() {
	for (int i = 0; i <= N + 1; i++) {
		for (int j = 0; j <= M + 1; j++) 
			cout << ori_map[i][j];

		cout << "\n";
	}
}

void input_map() {
	for (int i = 1; i <= N; i++) {
		string st; cin >> st;
		for (int j = 1; j <= M; j++) {
			if (st[j - 1] == '0')
				ori_map[i][j] = false;
			else
				ori_map[i][j] = true;
		}
	}
}

void solv_with_bfs(int x = 1, int y = 1) {
	visited_map[x][y] = true;

	queue<pair<int, int> > que;
	que.push({ x, y });

	while (true) {
		if (que.size() <= 0) 
			break;

		int now_x = que.front().first;
		int now_y = que.front().second;
		que.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = now_x + direction_xy[i].first;
			int next_y = now_y + direction_xy[i].second;

			if (ori_map[next_x][next_y] && !visited_map[next_x][next_y]) {
				count_map[next_x][next_y] = count_map[now_x][now_y] + 1;
				visited_map[next_x][next_y] = 1;
				que.push({ next_x, next_y });
			}
		}
	}
}

int main() {
	cin >> N >> M;
	input_map();
	// print_map();
	solv_with_bfs();
	cout << count_map[N][M] + 1;
}