#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N;
vector<vector<int>> board;
vector<vector<bool>> visit;
set<int> s;
const int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

int BFS_find() {
	int maxi(0);
	for (const int a : s) {
		visit.assign(N + 2, vector<bool>(N + 2, false));
		int cnt(0);

		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				if (board[i][j] > a && !visit[i][j]) {
					cnt++;
					stack<pair<int, int>> st;
					st.push(make_pair(i, j));
					visit[i][j] = true;

					while (!st.empty()) {
						int x = st.top().first;
						int y = st.top().second;
						st.pop();
						for (int k = 0; k < 4; ++k) {
							int x_nxt = x + dir[k][0];
							int y_nxt = y + dir[k][1];
							if (board[x_nxt][y_nxt] > a && !visit[x_nxt][y_nxt]) {
								st.push(make_pair(x_nxt, y_nxt));
								visit[x_nxt][y_nxt] = true;
							}
						}
					}
				}
			}
		}

		maxi = max(maxi, cnt);
	}
	return maxi;
}

void input() {
	cin >> N;
	board.resize(N + 2, vector<int>(N + 2, -1));
	visit.resize(N + 2, vector<bool>(N + 2, false));
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			cin >> board[i][j];
			s.insert(board[i][j]);
		}
	}
	s.insert(0);
}

int main() {
	Sync;

	input();
	int ans = BFS_find();
	cout << ans;

	return 0;
}
