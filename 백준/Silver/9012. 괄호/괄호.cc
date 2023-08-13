#include <iostream>
#include <string>
#include <stack>

using namespace std;

string Func() {
	string st; cin >> st;
	stack<bool> s;
	int L = 0, R = 0;

	for (int i = 0; i < st.size(); i++) {
		if (st.at(i) == '(')
			s.push(true);
		else {
			if (s.empty())
				return "NO";
			else
				s.pop();
		}
	}

	if (s.empty())
		return "YES";
	else
		return "NO";
}

int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++)
		cout << Func() << "\n";

	return 0;
}