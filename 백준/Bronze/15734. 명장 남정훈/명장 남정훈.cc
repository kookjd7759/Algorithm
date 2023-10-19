#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(6);
	int l, r, a; cin >> l >> r >> a;
	while (a != 0) {
		if (l > r) r++;
		else l++;
		a--;
	}
	cout << min(l, r) * 2;
}