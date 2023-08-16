#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	set<string> set_;
	int inputSize; cin >> inputSize;
	int testSize; cin >> testSize;
	int count = 0;

	while (inputSize--) {
		string st; cin >> st;
		set_.insert(st);
	}

	while (testSize--) {
		string st; cin >> st;
		if (set_.count(st))
			count++;
	}
	cout << count;
}