#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int max_(0);
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		int score = a * (b + c);
		if (a == b + c) score <<= 1;
		max_ = max(score, max_);
	}
	cout << max_;
}
