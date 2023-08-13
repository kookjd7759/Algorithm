#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> p_que;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int size; cin >> size;
	for (int i = 0; i < size; i++) {
		int ans; cin >> ans;
		if (ans == 0) {
			if (p_que.empty())
				cout << 0 << "\n";
			else {
				cout << p_que.top() << "\n";
				p_que.pop();
			}
		}
		else
			p_que.push(ans);
	}

	return 0;
}