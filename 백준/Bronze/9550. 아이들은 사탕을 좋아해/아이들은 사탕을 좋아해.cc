#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int ret(0);
		while (n--) {
			int c; cin >> c;
			ret += c / k;
		}
		cout << ret << "\n";
	}
}