#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	if (a < c && b < 0 ||
		a > c && b > 0 ||
		(c - a) % b) cout << "X";
	else cout << abs((c - a) / b) + 1;
}