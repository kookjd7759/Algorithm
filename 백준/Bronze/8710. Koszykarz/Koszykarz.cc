#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	(b - a) % c == 0 ? cout << (b - a) / c : cout << (b - a) / c + 1;
}
