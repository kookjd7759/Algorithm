#include <iostream>
#include <vector>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

const int dir[4][2] = { {0, 1},{0, -1},{1, 0},{-1, 0} };

int main() {
	Sync;

	int n, m; cin >> n >> m;
	vector<vector<int >>board(n + 2, vector<int >(m + 2, 0));
	vector<vector<bool>>visit(n + 2, vector<bool>(m + 2, false));
	for (int i = 1; i <= n; ++i) for (int j = 1; j <= m; ++j) 
		cin >> board[i][j];

	int cnt(0), maxi(0);
	for (int i = 1; i <= n; ++i) for (int j = 1; j <= m; ++j) {
		if (board[i][j] == 1 && !visit[i][j]) {
			cnt++;
			stack<pair<int, int>> st;
			st.push(make_pair(i, j));
			visit[i][j] = true;
			int size(0);
			while (!st.empty()) {
				int x = st.top().first;
				int y = st.top().second;
				st.pop();
				size++;
				for (int j = 0; j < 4; ++j) {
					int x_nxt = x + dir[j][0];
					int y_nxt = y + dir[j][1];
					if (board[x_nxt][y_nxt] == 1 && !visit[x_nxt][y_nxt]) {
						st.push(make_pair(x_nxt, y_nxt));
						visit[x_nxt][y_nxt] = true;
					}
				}
			}
			maxi = max(maxi, size);
		}
	}

	cout << cnt << "\n" << maxi;
	return 0;
}
