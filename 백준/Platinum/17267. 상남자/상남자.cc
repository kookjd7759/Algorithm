#include <iostream>
#include <cassert>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct memory {
	int start;
	int end;
	int index;
};

struct Node {
	int value;
	vector<int> adj;

	Node() : value(0), adj() {}
	Node(int value) : value(value), adj() {}
};

struct LR {
	int l;
	int r;
	LR() {}
	LR(int l, int r) : l(l), r(r) {}
};

bool isIntersection(int l1, int r1, int l2, int r2) {
	return !(r1 < l2 || r2 < l1);
}

int main() {
	Sync;

	int N, M; cin >> N >> M;
	int l, r; cin >> l >> r;
	string* board = new string[N];
	for (int i = 0; i < N; ++i) cin >> board[i];

	vector<memory> previous, current;
	vector<Node> graph; 
	int start(0), count(0), index(0), player(0);
	auto add_node = [&]() -> void {
		if (!count) return;

		int end = start + count - 1;
		graph.push_back({ count });
		current.push_back({ start , end, index });

		for (const memory& prev : previous) {
			if (isIntersection(prev.start, prev.end, start, end)) {
				graph[prev.index].adj.push_back(index);
				graph[index].adj.push_back(prev.index);
			}
		}

		count = 0;
		index++;
	};
	for (int j = 0; j < M; ++j) {
		current.clear();
		for (int i = 0; i < N; ++i) {
			char c(board[i][j]);
			if (c != '1') {
				if (c == '2') player = index;
				if (count == 0) start = i;
				count++;
			}
			else add_node();
		}
		add_node();
		previous = current;
	}

	vector<bool> visited(graph.size(), false);
	queue<pair<int, LR>> que;
	que.push(make_pair(player, LR(l, r)));
	visited[player] = true;
	int ans = graph[player].value;
	while (!que.empty()) {
		int idx = que.front().first;
		LR lr = que.front().second;
		que.pop();

		for (const int& next_idx : graph[idx].adj) {
			if (visited[next_idx]) continue;
			if (next_idx < idx && lr.l > 0) {
				que.push(make_pair(next_idx, LR(lr.l - 1, lr.r)));
				visited[next_idx] = true;
				ans += graph[next_idx].value;
			}
			if (next_idx > idx && lr.r > 0) {
				que.push(make_pair(next_idx, LR(lr.l, lr.r - 1)));
				visited[next_idx] = true;
				ans += graph[next_idx].value;
			}
		}
	}
	cout << ans;

	delete[] board;

	return 0;
}
