#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int cur(0); cin >> cur;
	while (true) {
		char oper; cin >> oper;
		if (oper == '=') break;

		int n; cin >> n;
		if (oper == '+') cur += n;
		else if (oper == '-') cur -= n;
		else if (oper == '*') cur *= n;
		else if (oper == '/') cur /= n;
	}
	cout << cur;
}