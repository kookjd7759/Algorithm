#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> st[i];
	int m; cin >> m;
	if (m == 1) {
		for (int i = 0; i < n; i++) cout << st[i] << "\n";
	}
	else if (m == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--)
				cout << st[i][j];
			cout << "\n";
		}
	}
	else {
		for (int i = n - 1; i >= 0; i--) cout << st[i] << "\n";
	}
}