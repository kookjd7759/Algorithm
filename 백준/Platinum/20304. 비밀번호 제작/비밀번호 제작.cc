#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int get_bitLength(int n) {
	int len(0), idx(0);
	while (n) {
		n >>= 1;
		len++;
	}
	return len;
}

int main() {
	Sync;

	int N, M, length;
	cin >> N >> M; length = get_bitLength(N);
	vector<int> nodes(N + 1, 0);
	vector<bool> visited(N + 1, false);
	queue<int> que;
	for (int i = 0; i < M; ++i) {
		int n; cin >> n;
		que.push(n);
		visited[n] = true;
	}

	while (!que.empty()){
		int cur = que.front();
		que.pop();

		for (int i = 0; i <= length; ++i) {
			int nxt = cur ^ (1 << i);

			if (nxt >= N + 1) continue;
			if (visited[nxt]) continue;

			nodes[nxt] = nodes[cur] + 1;
			visited[nxt] = true;
			que.push(nxt);
		}
	}

	int ans(-1);
	for (int i = 0; i < N + 1; ++i)
		ans = max(ans, nodes[i]);
	cout << ans;

	return 0;
}
