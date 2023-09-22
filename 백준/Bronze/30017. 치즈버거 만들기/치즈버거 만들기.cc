#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a - 1 <= b) cout << ((a << 1) - 1);
	else cout << (b << 1) + 1;
}