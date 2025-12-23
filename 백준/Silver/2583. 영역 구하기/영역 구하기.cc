#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

int main() {
	Sync;

	int n, m, k; cin >> n >> m >> k;
	vector<vector<int >>board(n + 2, vector<int >(m + 2, 0));
	vector<vector<bool>>visit(n + 2, vector<bool>(m + 2, false));

	for (int i = 0; i < k; ++i) {
		int x1, y1, x2, y2; cin >> y1 >> x1 >> y2 >> x2;
		for (int x = x1 + 1; x <= x2; ++x) for (int y = y1 + 1; y <= y2; ++y)
			board[x][y] = 2;
	}
	
	for (int i = 1; i <= n; ++i) for (int j = 1; j <= m; ++j)
		board[i][j] = (board[i][j] == 2 ? 0 : 1);

	int cnt(0);
	vector<int> vec;
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
			vec.push_back(size);
		}
	}

	cout << cnt << "\n";
	sort(vec.begin(), vec.end());
	for (const int& a : vec) cout << a << ' ';
	return 0;
}
