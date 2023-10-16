#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n; 
	int cnt(0);
	for (int i = 1; i <= n; i++) {
		int temp = i;
		while (temp) {
			int k = temp % 10;
			if (k == 3 || k == 6 || k == 9) cnt++;
			temp /= 10;
		}
	}
	cout << cnt;
}