#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int F, start, target, U, D, cnt(0);
	cin >> F >> start >> target >> U >> D;

	vector<bool> visit(F + 1, false); visit[0] = true;
	queue<pair<int, int>> que; que.push(make_pair(start, 0));
	visit[start] = true;
	while (!que.empty()) {
		pair<int, int> cur = que.front(); que.pop();
		if (cur.first == target) {
			cout << cur.second;
			return 0;
		}
		visit[cur.first] = true;
		int up = cur.first + U;
		int down = cur.first - D;
		if (up <= F && !visit[up]) {
			que.push(make_pair(up, cur.second + 1));
			visit[up] = true;
		}
		if (down >= 1 && !visit[down]) {
			que.push(make_pair(down, cur.second + 1));
			visit[down] = true;
		}
	}

	cout << "use the stairs";

	return 0;
}
