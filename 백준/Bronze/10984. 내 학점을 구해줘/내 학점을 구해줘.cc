#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed; cout.precision(1);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int ret1(0);
		double ret2(0.0);
		int n; cin >> n;
		while (n--) {
			int a;
			double b;
			cin >> a >> b;
			ret1 += a;
			ret2 += (double)a * b;
		}
		cout << ret1 << " " << ret2 / (double)ret1 << "\n";
	}
}