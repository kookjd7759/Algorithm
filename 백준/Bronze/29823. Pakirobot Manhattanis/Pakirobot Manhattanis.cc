#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int x(0), y(0);
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		if (c == 'N') y++;
		else if (c == 'S') y--;
		else if (c == 'W') x--;
		else if (c == 'E') x++;
	}

	cout << abs(x) + abs(y);
}