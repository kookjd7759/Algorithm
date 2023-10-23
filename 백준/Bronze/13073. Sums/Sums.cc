#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int oddSum = n * n;
		int evenSum = oddSum + n;
		int sum = (evenSum >> 1);
		cout << sum << " " << oddSum << " " << evenSum << "\n";
	}
}