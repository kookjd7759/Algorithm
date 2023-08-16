#include <iostream>
#include <set>

using namespace std;

struct compare {
	bool operator() (const string& left, const string& right) const {
		return left > right;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	set<string, compare> set_;
	int size; cin >> size;
	while (size--) {
		string name, log; cin >> name >> log;
		if (log == "enter") 
			set_.insert(name);
		else 
			set_.erase(name);
	}

	for (auto iter : set_)
		cout << iter << "\n";
}