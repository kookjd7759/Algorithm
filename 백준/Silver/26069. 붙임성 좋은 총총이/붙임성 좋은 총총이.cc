#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int size; cin >> size;
	set<string> set_; set_.insert("ChongChong");
	int count = 1;
	while (size--) {
		string st1, st2; cin >> st1 >> st2;
		bool st_dance1 = set_.count(st1);
		bool st_dance2 = set_.count(st2);
		if (!st_dance1 and st_dance2) {
			count++;
			set_.insert(st1);
		}
		else if (st_dance1 and !st_dance2) {
			count++;
			set_.insert(st2);
		}
	}

	cout << count;
}