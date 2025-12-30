#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, M;
int arr[10];

void dfs(int start, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; ++i)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}
	for (int i = start; i <= N; ++i) {
		arr[depth] = i;
		dfs(i + 1, depth + 1);
	}
}

int main() {
	Sync;

	cin >> N >> M;
	dfs(1, 0);

	return 0;
}
