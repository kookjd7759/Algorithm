#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct Number {
	int num;
};

struct comp {
	bool operator()(Number a, Number b) {
		if (abs(a.num) == abs(b.num))
			return a.num > b.num;
		else
			return abs(a.num) > abs(b.num);
	}
};

priority_queue<Number, vector<Number>, comp> p_que;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int size; cin >> size;
	for (int i = 0; i < size; i++) {
		Number ans; cin >> ans.num;
		if (ans.num == 0) {
			if (p_que.empty())
				cout << 0 << "\n";
			else {
				cout << p_que.top().num << "\n";
				p_que.pop();
			}
		}
		else
			p_que.push(ans);
	}

	return 0;
}