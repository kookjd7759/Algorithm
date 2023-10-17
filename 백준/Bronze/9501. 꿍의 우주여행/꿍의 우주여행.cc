#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, d; cin >> n >> d;
		int ret(0);
		while (n--) {
			double v, f, c; cin >> v >> f >> c;
			if (v * (f / c) >= d) ret++;
		}
		cout << ret << "\n";
	}
}