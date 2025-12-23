#include <iostream>
#include <string>
#include <stack>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int tc; cin >> tc;
	cin.ignore();
	while (tc--) {
		stack<char> left, right;
		string line; getline(cin, line);
		for (const char c : line) {
			if (c == '<') {
				if (left.empty()) continue;
				right.push(left.top());
				left.pop();
			}
			else if (c == '>') {
				if (right.empty()) continue;
				left.push(right.top());
				right.pop();
			}
			else if (c == '-') {
				if (left.empty()) continue;
				left.pop();
			}
			else left.push(c);
		}

		while (!left.empty()) {
			right.push(left.top());
			left.pop();
		}

		while (!right.empty()) { cout << right.top(); right.pop(); } cout << "\n";
	}

	return 0;
}