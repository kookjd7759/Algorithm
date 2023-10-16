#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 1 || i == n) cout << "#";
				else if (j == 1 || j == n) cout << "#";
				else cout << "J";
			}
			cout << "\n";
		}
		cout << "\n";
	}
}