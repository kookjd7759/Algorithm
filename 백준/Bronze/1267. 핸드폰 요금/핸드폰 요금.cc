#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int y(0), m(0);
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		y += (t / 30) * 10 + 10;
		m += (t / 60) * 15 + 15;
	}
	if (y == m)
		cout << "Y M " << y;
	else y < m ? cout << "Y " << y : cout << "M " << m;
}