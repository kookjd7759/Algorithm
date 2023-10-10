#include <iostream>

using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int ae, be, ce; cin >> ae >> be >> ce;
	int ret(0);
	if (a < ae) ret += ae - a;
	if (b < be) ret += be - b;
	if (c < ce) ret += ce - c;
	cout << ret;
}
