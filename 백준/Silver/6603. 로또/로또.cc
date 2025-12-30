#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N;
vector<int> arr;
int ans[6];
void dfs(int prev_idx, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; ++i)
			cout << ans[i] << ' ';
		cout << "\n";
		return;
	}

	for (int i = prev_idx; i < N; ++i) {
		ans[depth] = arr[i];
		dfs(i + 1, depth + 1);
	}
}

int main() {
	Sync;

	while (true) {
		cin >> N;
		if (!N) break;

		arr.resize(N);
		for (int i = 0; i < N; ++i) cin >> arr[i];

		dfs(0, 0);
		cout << "\n";
	}

	return 0;
}
