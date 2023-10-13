#include <iostream>

using namespace std;

int main() {
	int n, t; cin >> n >> t;
	while (t--) {
		if (n & 1) n *= 2;
		else n /= 2;
		n ^= 6;
	}
	cout << n;
}