#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int g, c, e; cin >> g >> c >> e;
		if (e - c < 0) cout << 0;
		else {
			if (g == 1) cout << (e - c);
			else if (g == 2) cout << (e - c) * 3;
			else cout << (e - c) * 5;
		}
		cout << "\n";
	}
}