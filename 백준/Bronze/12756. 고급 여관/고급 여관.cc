#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a[2], b[2]; cin >> a[1] >> a[0] >> b[1] >> b[0];
	while (a[0] > 0 && b[0] > 0) {
		a[0] -= b[1];
		b[0] -= a[1];
	}

	if (a[0] <= 0 && b[0] <= 0) cout << "DRAW";
	else a[0] > b[0] ? cout << "PLAYER A" : cout << "PLAYER B";
}