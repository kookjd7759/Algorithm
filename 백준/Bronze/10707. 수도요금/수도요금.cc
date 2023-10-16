#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c, d, p; cin >> a >> b >> c >> d >> p;
	int x = a * p;
	int y = b;
	if (p > c) y += (p - c) * d;

	cout << min(x, y);
}