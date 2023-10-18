#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int a, b; cin >> a >> b;
		if (a == 0 && b == 0) break;

		int ret(0), c = 0;
		for (int i = 1; i <= 10; i++) {
			int a_ = a % 10, b_ = b % 10;
			int sum = a_ + b_ + c;
			if (sum >= 10) { ret++; c = 1; }
			else c = 0;
			a /= 10; b /= 10;
		}
		cout << ret << "\n";
	}
}