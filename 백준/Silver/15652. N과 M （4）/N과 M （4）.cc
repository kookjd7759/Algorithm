#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, M;
int arr[10];

void dfs(int prev, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; ++i)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; ++i) {
		if (prev > i) continue;
		arr[depth] = i;
		dfs(i, depth + 1);
	}
}

int main() {
	Sync;

	cin >> N >> M;
	dfs(0, 0);

	return 0;
}
