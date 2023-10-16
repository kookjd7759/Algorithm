#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a(100), b(100);
	while (n--) {
		int as, bs; cin >> as >> bs;
		if (as == bs) continue;

		if (as > bs) 
			b -= as;
		else 
			a -= bs;
	}
	cout << a << "\n" << b;
}