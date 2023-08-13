#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> que;

void Func(string st) {
	if (st == "push") {
		int num; cin >> num;
		que.push(num);
	}
	else if (st == "pop") {
		if (que.empty())
			cout << "-1 \n";
		else {
			cout << que.front() << "\n";
			que.pop();
		}
			
	}
	else if (st == "size") {
		cout << que.size() << "\n";
	}
	else if (st == "empty") {
		if (que.empty())
			cout << "1 \n";
		else
			cout << "0 \n";
	}
	else if (st == "front") {
		if (que.empty())
			cout << "-1 \n";
		else
			cout << que.front() << "\n";
	}
	else if (st == "back") {
		if (que.empty())
			cout << "-1 \n";
		else
			cout << que.back() << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	while (N--) {
		string st; cin >> st;
		Func(st);
	}

	return 0;
}