#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, k; cin >> n >> m >> k;
	while (k > 0) {
		while (n <= (m * 2) && k > 0) {
			k--; m--;
		}
		while (n > (m * 2) && k > 0) {
			k--; n--;
		}
	}
	cout << min(n / 2, m);
}