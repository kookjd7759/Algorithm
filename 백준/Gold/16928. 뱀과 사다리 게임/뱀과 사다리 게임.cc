#include <iostream>
#include <queue>

using namespace std;

bool visited[101];
int board[101];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	for (int i = 0; i < 101; i++) { visited[i] = false; board[i] = i; }
	visited[1] = true;

	int n, m; cin >> n >> m;
	for (int i = 0, size = n + m; i < size; i++) {
		int start, end; cin >> start >> end;
		board[start] = end;
	}

	queue<int> que; que.push(1);
	int ret(0);
	while (true) {
		int size = que.size();
		ret++;
		while (size--) {
			int pos = que.front();
			que.pop();
			for (int i = 1; i <= 6; i++) {
				if (!visited[pos + i]) {
					if (board[pos + i] == 100) {
						cout << ret;
						exit(0);
					}
					visited[pos + i] = true;
					que.push(board[pos + i]);
				}
			}
		}
	}
}