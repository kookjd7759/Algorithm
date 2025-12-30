#include <iostream>
#include <algorithm>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, M;
vector<int> arr;
vector<int> ans;
vector<bool> visited;

void dfs(int prev, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; ++i)
			cout << ans[i] << ' ';
		cout << "\n";
		return;
	}
	for (int i = 0; i < N; ++i) {
		if (visited[i]) continue;
		if (prev > arr[i]) continue;
		visited[i] = true;
		ans[depth] = arr[i];
		dfs(arr[i], depth + 1);
		visited[i] = false;
	}
}

int main() {
	Sync;

	cin >> N >> M;
	arr.resize(N); ans.resize(M);
	visited.assign(N, false);
	for (int i = 0; i < N; ++i) cin >> arr[i];
	sort(arr.begin(), arr.end());

	dfs(0, 0);

	return 0;
}
