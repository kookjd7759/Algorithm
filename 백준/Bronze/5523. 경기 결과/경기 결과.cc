#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a(0), b(0);
	for (int i = 1; i <= n; i++) {
		int as, bs; cin >> as >> bs;
		if (as == bs) continue;
		as > bs ? a++ : b++;
	}
	cout << a << " " << b;
}