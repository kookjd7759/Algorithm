#include <iostream>
#include <string>
#include <stack>

using namespace std;

string Func(string st) {
	stack<char> stack_;

	for (int i = 0; i < st.size(); i++) {
		if (st.at(i) == '(')
			stack_.push(1);
		else if (st.at(i) == '[')
			stack_.push(2);
		else if (st.at(i) == ')') {
			if (stack_.size() != 0) {
				if (stack_.top() == 1)
					stack_.pop();
				else
					return "no";
			}
			else
				return "no";
		}
		else if (st.at(i) == ']') {
			if (stack_.size() != 0) {
				if (stack_.top() == 2 && stack_.size() != 0)
					stack_.pop();
				else
					return "no";
			}
			else
				return "no";
		}
	}

	if (stack_.size() == 0)
		return "yes";
	else
		return "no";
}

int main() {
	while (true) {
		string st; getline(cin, st);

		if (st.at(0) == '.')
			break;
		else
			cout << Func(st) << "\n";
	}

	return 0;
}