#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, c; char op, eq;
		cin >> a >> op >> b >> eq >> c;
		cout << "Case " << i << ": ";
		if (op == '+') a + b == c ? cout << "YES" : cout << "NO";
		else a - b == c ? cout << "YES" : cout << "NO";
		cout << "\n";
	}
}