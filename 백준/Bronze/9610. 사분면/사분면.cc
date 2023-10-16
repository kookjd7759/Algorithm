#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int q1(0), q2(0), q3(0), q4(0), axis(0);
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		if (x == 0 || y == 0) axis++;
		else if (x > 0) {
			if (y > 0) q1++;
			else q4++;
		}
		else {
			if (y > 0) q2++;
			else q3++;
		}
	}
	cout << "Q1: " << q1 << "\n";
	cout << "Q2: " << q2 << "\n";
	cout << "Q3: " << q3 << "\n";
	cout << "Q4: " << q4 << "\n";
	cout << "AXIS: " << axis;
}