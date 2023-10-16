#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < 32; i++) {
			if (n & (1 << i)) cout << i << " ";
		}
		cout << "\n";
	}
}