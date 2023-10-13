#include <iostream>

using namespace std;

int main() {
	int h, l, a, b; cin >> h >> l >> a >> b;
	bool ret = false;
	if (l >= a) {
		if (b & 1) {
			if (h >= (b + 1) / 2) ret = true;
		}
		else 
			if (h >= b / 2) ret = true;
	}
	if (l >= b) {
		if (a & 1) {
			if (h >= (a + 1) / 2) ret = true;
		}
		else
			if (h >= a / 2) ret = true;
	}
	ret ? cout << "YES" : cout << "NO";
}