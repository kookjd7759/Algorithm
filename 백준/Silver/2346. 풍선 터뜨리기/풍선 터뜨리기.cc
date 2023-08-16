#include <iostream>
#include <deque>

using namespace std;

int main() {
	int N; cin >> N;
	deque<pair<int, int>> deq_i_v;
	for (int i = 1; i <= N; i++) {
		int num; cin >> num;
		deq_i_v.push_back({i, num });
	}

	while (true) {
		cout << deq_i_v.front().first << " ";
		int value = deq_i_v.front().second;
		deq_i_v.pop_front();

		if (deq_i_v.empty())
			break;

		if (value > 0) {
			for (int i = 1; i < value; i++) {
				deq_i_v.push_back(deq_i_v.front());
				deq_i_v.pop_front();
			}
		}
		else { // value < 0
			for (int i = 0; i < abs(value); i++) {
				deq_i_v.push_front(deq_i_v.back());
				deq_i_v.pop_back();
			}
		}
	}
}