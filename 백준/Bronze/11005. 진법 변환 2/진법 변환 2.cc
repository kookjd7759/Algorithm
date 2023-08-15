#include <iostream>
#include <stack>

using namespace std;

char getNumber(int n) {
	if (n >= 0 and n <= 9)
		return (char)(n + 48);

	if (n >= 10)
		return (char)(n + 55);
}

int main() {
	int num, ver;
	cin >> num >> ver;
	stack<char> st;

	while (true) {
		st.push(getNumber(num % ver));
		num /= ver;
		if (num < ver) {
			if (num != 0)
				st.push(getNumber(num));
			break;
		}
	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}