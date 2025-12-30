#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int N, target;
vector<int> arr;
int ans = 0, sum = 0;
void dfs(int size, int start, int depth) {
	if (depth == size) {
		if (sum == target) ans++;
		return;
	}

	for (int i = start; i < N; ++i) {
		sum += arr[i];
		dfs(size, i + 1, depth + 1);
		sum -= arr[i];
	}
}

int main() {
	Sync;

	cin >> N >> target;
	arr.resize(N);
	for (int i = 0; i < N; ++i) 
		cin >> arr[i];

	for (int i = 1; i <= N; ++i) {
		dfs(i, 0, 0);
	}
	cout << ans;

	return 0;
}
