#include <iostream>
#include <deque>
#include <string>

using namespace std;

deque<int> de;

void Func(const string& st) {
	if (st == "push_front") {
		int num; cin >> num;
		de.push_front(num);
	}
	else if (st == "push_back") {
		int num; cin >> num;
		de.push_back(num);
	}
	else if (st == "empty") 
		cout << de.empty() << "\n";
	else if (st == "size")
		cout << de.size() << "\n";
	else {
		if (de.empty()) {
			cout << -1 << "\n";
			return;
		}

		if (st == "pop_front") {
			cout << de.front() << "\n";
			de.pop_front();
		}
		else if (st == "pop_back") {
			cout << de.back() << "\n";
			de.pop_back();
		}
		else if (st == "front")
			cout << de.front() << "\n";
		else if (st == "back")
			cout << de.back() << "\n";
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