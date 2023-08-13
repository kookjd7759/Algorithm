#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> que;

void Func() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string st; cin >> st;

	if (st == "push") {
		int num; cin >> num;
		que.push(num);
	}
	else if (st == "size")
		cout << que.size() << "\n";
	else if (st == "empty") {
		if (que.empty())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	else {
		if (que.empty())
			cout << -1 << "\n";
		else {
			if (st == "pop") {
				cout << que.front() << "\n";
				que.pop();
			}
			else if (st == "front")
				cout << que.front() << "\n";
			else if (st == "back")
				cout << que.back() << "\n";
		}
	}
}

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		Func();

	return 0;
}