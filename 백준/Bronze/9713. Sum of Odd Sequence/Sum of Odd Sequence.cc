#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int sum(0);
		for (int i = 1; i <= n; i += 2) sum += i;
		cout << sum << "\n";
	}
}