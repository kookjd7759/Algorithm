#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed; cout.precision(1);
	int n; cin >> n;
	while (n--) {
		double a, b; cin >> a >> b;
		cout << abs(a - b) << "\n";
	}
}