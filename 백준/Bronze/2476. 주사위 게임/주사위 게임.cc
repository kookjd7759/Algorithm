#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int max_(0);
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		bool ch1 = a == b;
		bool ch2 = a == c;
		bool ch3 = b == c;
		int  ret = 0;
		if (ch1 && ch3) ret = 10000 + (a * 1000);
		else if (ch1 || ch2) ret = 1000 + (a * 100);
		else if (ch3) ret = 1000 + (b * 100);
		else ret = 100 * max(a, max(b, c));
		max_ = max(max_, ret);
	}
	cout << max_;
}