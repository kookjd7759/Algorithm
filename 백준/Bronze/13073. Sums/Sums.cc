#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int sum = (1 + n) * n / 2;
		int oddSum = n * n;
		int evenSum = oddSum + n;
		cout << sum << " " << oddSum << " " << evenSum << "\n";
	}
}