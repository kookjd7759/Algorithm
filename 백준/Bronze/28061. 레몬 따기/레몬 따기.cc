#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int max_(0);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		max_ = max(max_, a - (n - i));
	}
	cout << max_;
}