#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int b, n; cin >> b >> n;
		if (!b && !n) break;

		int ret(1), min_diff(2e9);
		for (int i = 1; i <= b; i++) {
			int a(1);
			for (int j = 0; j < n; j++) a *= i;
			
			int diff = abs(b - a);
			if (min_diff > diff) {
				ret = i;
				min_diff = diff;
			}
			else if (diff == 0) {
				ret == i; 
				break; 
			}
			else if (min_diff < diff)
				break;
		}
		cout << ret << "\n";
	}
}