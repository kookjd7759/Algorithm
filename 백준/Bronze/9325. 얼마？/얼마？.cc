#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); int N;
	int t; cin >> t;
	while (t--) {
		int s; cin >> s;
		int n; cin >> n;
		int ret(0);
		while (n--) {
			int q, p; cin >> q >> p;
			ret += q * p;
		}
		cout << s + ret << "\n";
	}
}