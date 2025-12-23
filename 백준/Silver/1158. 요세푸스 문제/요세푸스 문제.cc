#include <iostream>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int n, k; cin >> n >> k;
	queue<int> que;
	for (int i = 0; i < n; ++i) que.push(i + 1);

	cout << "<";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k - 1; ++j) {
			int temp = que.front();
			que.pop();
			que.push(temp);
		}
		cout << que.front();
		if (i != n - 1) cout << ", ";
		que.pop();
	}
	cout << ">";

	return 0;
}