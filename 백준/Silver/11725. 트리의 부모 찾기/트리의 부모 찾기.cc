#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<vector<int>> vec(n + 1);
	bool* visited = new bool[n + 1];
	int* ret = new int[n + 1];
	for (int i = 0; i < n - 1; i++) {
		int a, b; cin >> a >> b;
		vec[a].push_back(b); vec[b].push_back(a);
		visited[i + 1] = false;
	}
	visited[n] = false;

	queue<int> que; que.push(1);
	while (que.size()) {
		int size = que.size();
		while (size--) {
			int index = que.front(); que.pop();
			visited[index] = true;
			for (const auto iter : vec[index]) {
				if (!visited[iter]) {
					que.push(iter);
					ret[iter] = index;
				}
			}
		}
	}

	for (int i = 2; i <= n; i++)
		cout << ret[i] << "\n";
}