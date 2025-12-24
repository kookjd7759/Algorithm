#include <iostream>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	const int SIZE = 500001;

	int start, target; cin >> start >> target;
	if (start == target) { cout << 0; return 0; }

	vector<int> steps(SIZE, -1); // -1 no stpe, 0<= target step
	vector<bool> visit_odd(SIZE, false);
	vector<bool> visit_even(SIZE, false);
	int temp = target, idx(1), max_depth(0);
	while (temp < SIZE) {
		steps[temp] = max_depth++;
		temp += idx++;
	}

	queue<pair<int, int>> que;
	que.push(make_pair(start, 0));
	int ret(2e9);
	visit_even[start] = true;
	while (!que.empty()) {
		pair<int, int> cur = que.front(); que.pop();
		if (cur.second <= steps[cur.first]) {
			int diff = steps[cur.first] - cur.second;
			if (!(diff & 1)) 
				ret = min(ret, cur.second + diff);
		}

		if (cur.second >= max_depth || cur.second >= ret) continue;

		int moves[3]{ cur.first + 1, cur.first - 1, cur.first * 2 };
		for (int i = 0; i < 3; ++i) {
			int next = moves[i];
			if (next < 0 || next >= SIZE) continue;
			if (visit_odd[next] && visit_even[next]) continue;
			if (visit_odd[next] && ((cur.second + 1) & 1)) continue;
			if (visit_even[next] && !((cur.second + 1) & 1)) continue;

			que.push(make_pair(next, cur.second + 1));
			(cur.second + 1) & 1 ?
				visit_odd[next] = true :
				visit_even[next] = true;
		}
	}

	cout << (ret == 2e9 ? -1 : ret);

	return 0;
}
