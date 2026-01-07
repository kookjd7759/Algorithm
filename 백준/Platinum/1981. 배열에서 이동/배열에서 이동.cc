#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int moves[4][2] = { {1, 0},{-1, 0}, {0, 1}, {0, -1} };
struct Node {
	int pos;
	int maxi;
	int mini;
};

int main() {
	Sync;

	int N, mini(2e9), maxi(-1); cin >> N;
	vector<vector<int>> board(N, vector<int>(N));
	for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) {
		cin >> board[i][j];
		mini = min(mini, board[i][j]);
		maxi = max(maxi, board[i][j]);
	}

	auto can = [&](int scope) -> bool {
		for (int left = mini; left + scope <= maxi; ++left) {
			int right = left + scope;

			if (board[0][0] < left || board[0][0] > right) continue;
			if (board[N - 1][N - 1] < left || board[N - 1][N - 1] > right) continue;

			vector<vector<bool>> visited(N, vector<bool>(N, false));
			queue<int> que;

			visited[0][0] = true;
			que.push(0);

			while (!que.empty()) {
				int x = que.front() / N;
				int y = que.front() % N;
				que.pop();

				if (x == N - 1 && y == N - 1) return true;

				for (int d = 0; d < 4; ++d) {
					int nx = x + moves[d][0];
					int ny = y + moves[d][1];
					if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
					if (visited[nx][ny]) continue;
					if (board[nx][ny] < left || board[nx][ny] > right) continue;

					visited[nx][ny] = true;
					que.push(nx * N + ny);
				}
			}
		}
		return false;
		};

	int l(0), r(maxi - mini); 
	int ans = r;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (can(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << ans;

	return 0;
}
