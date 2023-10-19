#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(2);
	int cnt(0);
	while (true) {
		cnt++;
		double d, r, t; cin >> d >> r >> t;
		if (!r) break;
		double m = d / (5280.0 * 12.0) * r * 3.14159265358979;
		cout << "Trip #" << cnt << ": ";
		cout << m << " " << m / t * 3600 << "\n";
	}
}