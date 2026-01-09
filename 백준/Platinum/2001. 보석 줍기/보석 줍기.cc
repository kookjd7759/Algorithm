#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

struct Line {
	int to;
	int limit;
};

struct Node {
	int pos;
	int have;
	int _case;
};

int main() {
	Sync;

	// input
	int N, M, K, numOfCase(0); cin >> N >> M >> K;
	vector<vector<Line>> lines(N);
	vector<int> rubies_id(N, 0);
	for (int i = 0; i < K; ++i) {
		int pos; cin >> pos; pos--;
		rubies_id[pos] = (1 << i);
		numOfCase |= rubies_id[pos];
	}
	for (int i = 0; i < M; ++i) {
		int from, to, limit; cin >> from >> to >> limit; from--, to--;
		lines[from].push_back({ to, limit });
		lines[to].push_back({ from, limit });
	}

	vector<vector<bool>> visited(N, vector<bool>(numOfCase + 1, false));
	vector<vector<int>> result(N, vector<int>(numOfCase + 1, 0));
	queue<Node> que;
	que.push({ 0, 0, 0 }); visited[0][0] = true; result[0][0] = 0;
	if (rubies_id[0] > 0) {
		que.push({ 0, 1, rubies_id[0] }); visited[0][rubies_id[0]] = true; result[0][rubies_id[0]] = 1;
	}
	while (!que.empty()) {
		Node node = que.front();
		que.pop();

		for (const Line& line : lines[node.pos]) {
			if (line.limit < node.have) continue;
			// pick up
			if (rubies_id[line.to] > 0 && 
				!(rubies_id[line.to] & node._case)) {
				Node next_pick({ line.to, node.have + 1, node._case | rubies_id[line.to] });
				if (!visited[next_pick.pos][next_pick._case]) {
					que.push(next_pick);
					visited[next_pick.pos][next_pick._case] = true;
					result[next_pick.pos][next_pick._case] = next_pick.have;
				}
			}

			// pass
			Node next_pass({ line.to, node.have, node._case });
			if (visited[next_pass.pos][next_pass._case]) continue;
			que.push(next_pass);
			visited[next_pass.pos][next_pass._case] = true;
			result[next_pass.pos][next_pass._case] = next_pass.have;
		}
	}

	int ans(result[0][0]);
	for (int i = 0; i <= numOfCase; ++i) ans = max(ans, result[0][i]);
	cout << ans;

	return 0;
}
