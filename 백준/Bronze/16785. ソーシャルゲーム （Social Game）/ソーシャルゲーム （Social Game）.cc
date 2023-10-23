#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	int coin(0), cnt(0);
	while (coin < c) {
		cnt++;
		coin += a;
		if (cnt % 7 == 0) coin += b;
	}
	cout << cnt;
}