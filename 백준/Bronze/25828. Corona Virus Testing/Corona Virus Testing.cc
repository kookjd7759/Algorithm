#include <iostream>

using namespace std;

int main() {
	int g, p, t; cin >> g >> p >> t;
	int a = g * p, b = g + t * p;
	if (a == b) cout << 0;
	else a < b ? cout << 1 : cout << 2;
}