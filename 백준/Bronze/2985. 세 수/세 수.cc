#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	char op; bool front;
	if (a + b == c) {
		op = '+'; front = true;
	}
	else if (a == b + c) {
		op = '+'; front = false;
	}
	else if (a - b == c) {
		op = '-'; front = true;
	}
	else if (a == b - c) {
		op = '-'; front = false;
	}
	else if (a * b == c) {
		op = '*'; front = true;
	}
	else if (a == b * c) {
		op = '*'; front = false;
	}
	else if (a / b == c) {
		op = '/'; front = true;
	}
	else if (a == b / c) {
		op = '/'; front = false;
	}

	front ? cout << a << op << b << "=" << c : cout << a << "=" << b << op << c;
}