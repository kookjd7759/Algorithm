#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a < b)
		cout << -1;
	else {
		for (int i = 0; i * 2 <= a; i++) {
			if ((a - i) - i == b) {
				cout << a - i << " " << i;
				exit(0);
			}
		}
		cout << -1;
	}
}