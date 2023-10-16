#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; cin >> a >> b >> c;
	if (c - b == 1 && b - a == 1) cout << 0;
	else cout << max(c - b, b - a) - 1;
}