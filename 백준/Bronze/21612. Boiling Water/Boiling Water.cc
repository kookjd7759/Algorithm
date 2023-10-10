#include <iostream>

using namespace std;

int main() {
	int a; cin >> a;
	int p = 5 * a - 400;
	cout << p << "\n";
	if (p < 100) cout << 1;
	else if (p == 100) cout << 0;
	else cout << -1;
}
