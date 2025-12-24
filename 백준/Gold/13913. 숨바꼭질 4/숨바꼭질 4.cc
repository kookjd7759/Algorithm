#include <iostream>
#include <vector>
#include <stack>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	const int SIZE = 100001;

	int n, target; cin >> n >> target;
	vector<bool> visit(SIZE, false);
	vector<int> path(SIZE, -1);

	queue<pair<int, int>> que; que.push(make_pair(n, 0));
	visit[n] = true; path[n] = n;
	while (!que.empty()) {
		pair<int, int> cur = que.front(); que.pop();
		
		if (cur.first == target) {
			cout << cur.second << "\n";
			break;
		}

		int list[3]{ cur.first + 1, cur.first - 1, cur.first * 2 };
		for (int i = 0; i < 3; ++i) {
			int next = list[i];
			if (next < 0 || next >= SIZE) continue;
			if (visit[next]) continue;

			que.push(make_pair(next, cur.second + 1));
			visit[next] = true;
			path[next] = cur.first;
		}
	}

	stack<int> st; st.push(target);
	while (true) {
		int n = st.top();
		if (n == path[n]) break;
		st.push(path[n]);
	}
	while (!st.empty()) {
		cout << st.top() << ' ';
		st.pop();
	}

	return 0;
}
