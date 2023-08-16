#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	deque<bool> input_deque;
	for (int i = 0; i < N; i++) {
		bool YN; cin >> YN;
		input_deque.push_back(YN);
	}

	deque<int> main_deque;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		if (!input_deque.front()) 
			main_deque.push_back(num);
		input_deque.pop_front();
	}

	int size; cin >> size;
	while (size--) {
		int num; cin >> num;
		main_deque.push_front(num);
		cout << main_deque.back() << " ";
		main_deque.pop_back();
	}
}