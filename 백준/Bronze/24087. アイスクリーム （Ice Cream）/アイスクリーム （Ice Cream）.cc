#include <iostream>

using namespace std;

int main() {
	int s, a, b; cin >> s >> a >> b;
	int ret(250);
	if (s - a > 0) {
		if ((s - a) % b == 0) ret += ((s - a) / b) * 100;
		else ret += (((s - a) / b) + 1) * 100;
	}
	cout << ret;
}