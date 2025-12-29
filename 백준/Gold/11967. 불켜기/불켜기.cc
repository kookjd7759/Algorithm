#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moves[4][2]{ {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

int main() {
	Sync;

	int N, M; cin >> N >> M;
	vector<vector<vector<int>>> light_switch(N, vector<vector<int>>(N));
	vector<vector<bool>> visit(N, vector<bool>(N, false));
	vector<vector<bool>> light(N, vector<bool>(N, false));
	for (int i = 0; i < M; ++i) {
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		x1--, y1--, x2--, y2--;
		light_switch[x1][y1].push_back(x2 * N + y2);
	}

	int ans(1), idle(0);
	queue<int> que;
	que.push(0);
	visit[0][0] = true;
	light[0][0] = true;
	for (const int pos_on : light_switch[0][0]) {
		if (light[pos_on / N][pos_on % N]) continue;
		light[pos_on / N][pos_on % N] = true;
		ans++;
	}
	while (!que.empty()) {
		int x = que.front() / N;
		int y = que.front() % N;
		que.pop();

		bool isIdle = true;
		for (int d = 0; d < 4; ++d) {
			int nx = x + moves[d][0];
			int ny = y + moves[d][1];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (visit[nx][ny] || !light[nx][ny]) continue;

			isIdle = false;

			que.push(nx * N + ny);
			visit[nx][ny] = true;

			for (const int pos_on : light_switch[nx][ny]) {
				if (light[pos_on / N][pos_on % N]) continue;
				light[pos_on / N][pos_on % N] = true;
				ans++;
			}
		}
		idle = (isIdle ? idle + 1 : 0);
		que.push(x * N + y);

		if (idle == que.size()) break;
	}
	cout << ans;

	return 0;
}
