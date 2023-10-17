#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int cnt(0);
		for (int b = 1; b < n; b++) {
			for (int a = 1; a < b; a++) {
				if ((a * a + b * b + m) % (a * b) == 0)
					cnt++;
			}
		}
		cout << cnt << "\n";
	}
}