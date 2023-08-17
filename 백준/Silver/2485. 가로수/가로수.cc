#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> measureVec(const int* a) {
	deque<int> deq_temp;
	vector<int> deq;

	for (int i = 1; i * i <= *a; i++) {
		if (i * i == *a)
			deq_temp.push_front(i);
		else if (*a % i == 0) {
			deq_temp.push_front(i);
			deq.push_back(*a / i);
		}
	}

	while (!deq_temp.empty()) {
		deq.push_back(deq_temp.front());
		deq_temp.pop_front();
	}

	return deq;
}

int main() {
	int N; cin >> N; N--;
	vector<int> vec;

	int prev; cin >> prev;
	while (N--) {
		int now; cin >> now;

		vec.push_back(now - prev);
		prev = now;
	}

	int small = -1;
	for (auto iter : vec)
		if (small < iter)
			small = iter;

	vector<int> mes_vec = measureVec(&small);
	int count = 0;
	for (auto mes_iter : mes_vec) {
		int Y = true;
		//cout << mes_iter << "\n";
		for (auto num_iter : vec) {
			if (num_iter % mes_iter != 0) {
				Y = false;
				break;
			}
		}

		if (Y) {
			for (auto num_iter : vec) {
				int num = num_iter / mes_iter - 1;
				count += num;
			}
			break;
		}
	}
	cout << count;
}