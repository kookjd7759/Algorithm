#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	set<int> set_;

	int inputSize; cin >> inputSize;
	while (inputSize--) {
		int num; cin >> num;
		set_.insert(num);
	}

	int testSize; cin >> testSize;
	while (testSize--) {
		int num; cin >> num;
		cout << set_.count(num) << " ";
	}
}