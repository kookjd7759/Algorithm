#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int n; cin >> n;
		if (!n) break;
		long long sum(0);
		while (n > 0) {
			sum += n * n; n--;
		}
		cout << sum << "\n";
	}
}