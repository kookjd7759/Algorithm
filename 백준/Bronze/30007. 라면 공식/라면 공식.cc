#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int a, b, x; cin >> a >> b >> x;
		cout << a * (x - 1) + b << "\n";
	}
}