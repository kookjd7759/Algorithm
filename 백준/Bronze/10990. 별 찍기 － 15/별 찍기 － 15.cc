#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << " ";

		if (i == 1) cout << "*";
		else {
			cout << "*";
			for (int j = 0; j < (i * 2 - 3); j++) cout << " ";
			cout << "*";
		}
		cout << "\n";
	}
}