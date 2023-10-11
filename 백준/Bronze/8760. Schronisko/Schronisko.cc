#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		int ret = a * b;
		if (ret & 1) ret--;
		cout << ret / 2 << "\n";
	}
}