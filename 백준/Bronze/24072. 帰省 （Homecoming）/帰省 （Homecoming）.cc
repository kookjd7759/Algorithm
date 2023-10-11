#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	(a <= c && c < b) ? cout << 1 : cout << 0;
}