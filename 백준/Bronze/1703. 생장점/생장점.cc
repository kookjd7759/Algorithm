#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	while (true) {
		int a; cin >> a;
		if (!a) break;

		int ret(1);
		for (int i = 0; i < a; i++) {
			int b, c; cin >> b >> c;
			ret *= b; ret -= c;
		}
		cout << ret << "\n";
	}
}