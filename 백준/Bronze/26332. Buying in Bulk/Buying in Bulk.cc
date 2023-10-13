#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int a, p; cin >> a >> p;
		cout << a << " " << p << "\n";
		if (a == 1) cout << p << "\n";
		else cout << p + ((a - 1) * (p - 2)) << "\n";
	}
}