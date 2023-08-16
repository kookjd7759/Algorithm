#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	queue<int> que;
	stack<int> st;
	int size; cin >> size;
	int counter = 1;
	while (size--) {
		int num; cin >> num;
		que.push(num);
	}

	bool Suc = true;
	while (true) {
		if (!que.empty() and que.front() == counter) {
			que.pop();
			counter++;
			continue;
		}

		if (!st.empty() and st.top() == counter) {
			st.pop();
			counter++;
			continue;
		}

		if (que.empty() and st.empty()) {
			break;
		}
		else if (que.empty() and !st.empty()) {
			Suc = false;
			break;
		}
		else {
			st.push(que.front());
			que.pop();
		}
	}
	
	if (Suc)
		cout << "Nice";
	else
		cout << "Sad";
}