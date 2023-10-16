#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int sum(0), min_(2e9);
		for (int i = 0; i < 7; i++) {
			int n; cin >> n;
			if ((n & 1) == 0) {
				sum += n;
				min_ = min(min_, n);
			}
		}
		cout << sum << " " << min_ << "\n";
	}
}