#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Scenario #" << i << ":\n";
		int a, b, c; cin >> a >> b >> c;
		a *= a; b *= b; c *= c;
		if (a + b == c || a + c == b || b + c == a)
			cout << "yes\n\n";
		else cout << "no\n\n";
	}
}