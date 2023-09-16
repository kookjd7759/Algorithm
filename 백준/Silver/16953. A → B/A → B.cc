#include <iostream>
#include <queue>

using namespace std;

queue<long long> que;

int main() {
	long long a, b; cin >> a >> b;
	que.push(a);
	int cnt(1);
	while (true) {
		long long size = que.size();
		if (size == 0) {
			cout << -1;
			exit(0);
		}
		while (size--) {
			long long num = que.front();
			que.pop();
			long long new_1 = num * 2;
			long long new_2 = num * 10 + 1;
			if (new_1 < b) que.push(new_1);
			if (new_2 < b) que.push(new_2);
			if (new_1 == b || new_2 == b) {
				cout << cnt + 1;
				exit(0);
			}
		}
		cnt++;
	}
}