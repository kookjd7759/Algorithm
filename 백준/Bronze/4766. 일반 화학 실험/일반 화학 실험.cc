#include <iostream>

using namespace std;

int main() {
	cout << fixed; cout.precision(2);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double prev, now; cin >> prev;
	while (true) {
		cin >> now;
		if (now == 999) break;
		cout << now - prev << "\n";
		prev = now;
	}
}