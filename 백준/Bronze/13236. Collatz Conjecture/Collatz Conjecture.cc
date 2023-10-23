#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n & 1) { n *= 3; n++; }
		else n /= 2;
	}
	cout << n << " ";
}