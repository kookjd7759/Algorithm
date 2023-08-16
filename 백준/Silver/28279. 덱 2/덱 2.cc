#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque<int> deq;
	int size; cin >> size;
	while (size--) {
		int ver; cin >> ver;
		if (ver == 1) {
			int x; cin >> x;
			deq.push_front(x);
		}
		else if(ver == 2) {
			int x; cin >> x;
			deq.push_back(x);
		}
		else if (ver == 3) {
			if (!deq.empty()) {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			else
				cout << "-1" << "\n";
		}
		else if (ver == 4) {
			if (!deq.empty()) {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			else
				cout << "-1" << "\n";
		}
		else if (ver == 5) {
			cout << deq.size() << "\n";
		}
		else if (ver == 6) {
			if (deq.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (ver == 7) {
			if (!deq.empty())
				cout << deq.front() << "\n";
			else
				cout << "-1\n";
		}
		else {
			if (!deq.empty())
				cout << deq.back() << "\n";
			else
				cout << "-1\n";
		}
	}
	
}