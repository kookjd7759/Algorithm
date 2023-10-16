#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	const int size = 7;
	int sum(0), min_(2e9);
	for (int i = 0; i < size; i++) {
		int a; cin >> a;
		if (a & 1) {
			sum += a;
			min_ = min(min_, a);
		}
	}
	if (sum == 0 && min_ == 2e9) cout << -1;
	else cout << sum << "\n" << min_;
}