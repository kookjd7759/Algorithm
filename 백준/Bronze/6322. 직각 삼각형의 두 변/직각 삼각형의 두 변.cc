#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(3);
	int idx(0);
	while (true) {
		int a, b, c; cin >> a >> b >> c;
		if (a + b + c == 0) break;
		idx++;

		char ver;
		double ret;
		if (a == -1) {
			ver = 'a';
			ret = (double)(c * c - b * b);
		}
		else if (b == -1) {
			ver = 'b';
			ret = (double)(c * c - a * a);
		}
		else {
			ver = 'c';
			ret = (double)(a * a + b * b);
		}
		cout << "Triangle #" << idx << "\n";
		if (ret <= 0.0) cout << "Impossible.";
		else cout << ver << " = " << sqrt(ret);
		cout << "\n\n";
	}
}