#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	bool ret = true;
	while (true) {
		if (n == 1) break;
		if (n % 2 == 0) n /= 2;
		else {
			ret = false;
			break;
		}
	}
	ret ? cout << 1 : cout << 0;
}