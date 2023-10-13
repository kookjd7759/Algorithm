#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a == b || abs(a - b) == 1) cout << a + b;
	else cout << min(a, b) * 2 + 1;
}