#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int y, x; cin >> y >> x;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) cout << "X";
			cout << "\n";
		}
		cout << "\n";
	}
}