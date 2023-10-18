#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q; cin >> q;
	while (q--) {
		int a;
		cin >> a;
		if ((a & (-a)) == a) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}