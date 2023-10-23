#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int o = n * n;
		int e = o + n;
		int s = (e >> 1);
		cout << s << " " << o << " " << e << "\n";
	}
}