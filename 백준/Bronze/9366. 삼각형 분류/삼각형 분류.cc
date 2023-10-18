#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, c; cin >> a >> b >> c;
		cout << "Case #" << i << ": ";
		if (a >= b + c || b >= a + c || c >= a + b) cout << "invalid!\n";
		else if (a == b && b == c) cout << "equilateral\n";
		else if (a == b || a == c || b == c) cout << "isosceles\n";
		else cout << "scalene\n";
	}
}