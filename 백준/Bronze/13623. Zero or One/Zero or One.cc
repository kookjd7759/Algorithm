#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	if (((a & b) & c) == 1 || ((a | b) | c) == 0) cout << "*";
	else if (a == b) cout << "C";
	else if (a == c) cout << "B";
	else if (b == c) cout << "A";
}