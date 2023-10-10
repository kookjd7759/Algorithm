#include <iostream>

using namespace std;

int main() {
	int x, y; cin >> x >> y;
	if ((y / x) & 1) cout << y % x;
	else cout << y % x + x;
}