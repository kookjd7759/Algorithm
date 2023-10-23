#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int n; cin >> n;
		if (n == -1) break;
		int ret(0), prev(0);
		while (n--) {
			int a, b; cin >> a >> b;
			ret += a * (b - prev);
			prev = b;
		}
		cout << ret << " miles\n";
	}
}