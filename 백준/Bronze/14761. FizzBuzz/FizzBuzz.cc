#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y, n; cin >> x >> y >> n;
	for (int i = 1; i <= n; i++) {
		if (i % x == 0) cout << "Fizz";
		if (i % y == 0) cout << "Buzz";
		if (i % x != 0 && i % y != 0) cout << i;
		cout << "\n";
	}
}