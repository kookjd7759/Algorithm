#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int size; cin >> size;
	bool New = false;
	set<string> set_;
	int count = 0;
	while (size--) {
		string st; cin >> st;
		if (st == "ENTER") {
			if (!New)
				New = true;
			else
				set_.clear();

			continue;
		}

		if (New) {
			if (!set_.count(st)) {
				set_.insert(st);
				count++;
			}
		}
	}

	cout << count;
}