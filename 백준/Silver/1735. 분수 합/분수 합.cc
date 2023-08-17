#include <iostream>
#include <deque>

using namespace std;

void makeSmall(int* a, int* b) {
	deque<int> deq_temp;
	deque<int> deq;
	int min_ = min(*a, *b);

	for (int i = 1; i * i <= min_; i++) {
		if (i * i == min_)
			deq_temp.push_front(i);
		else if (min_ % i == 0) {
			deq_temp.push_front(i);
			deq.push_back(min_ / i);
		}
	}

	while (!deq_temp.empty()) {
		deq.push_back(deq_temp.front());
		deq_temp.pop_front();
	}

	int size = deq.size();
	for (int i = 0; i < size; i++) {
		// cout << "Case : " << deq.front() << "\n";
		if (*a % deq.front() == 0 and *b % deq.front() == 0) {
			*a = *a / deq.front();
			*b = *b / deq.front();
			// cout << "Yes!\n";
			break;
		}
		deq.pop_front();
	}
}

int main() {
	int a1, b1; cin >> a1 >> b1;
	makeSmall(&a1, &b1);
	// cout << "MakeSamll : " << a1 << " " << b1 << "\n";

	int a2, b2; cin >> a2 >> b2;
	makeSmall(&a2, &b2);
	// cout << "MakeSamll : " << a2 << " " << b2 << "\n";

	int a = a1 * b2 + a2 * b1;
	int b = b1 * b2;
	makeSmall(&a, &b);
	cout << a << " " << b;
}