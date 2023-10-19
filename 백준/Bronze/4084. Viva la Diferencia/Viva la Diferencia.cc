#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (!a && !b && !c && !d) break;

		int cnt(0);
		while (a != b || b != c || c != d) {
			int a_, b_, c_, d_;
			a_ = abs(a - b); b_ = abs(b - c);
			c_ = abs(c - d); d_ = abs(d - a);
			a = a_; b = b_; c = c_; d = d_;
			cnt++;
		}
		cout << cnt << "\n";
	}
}