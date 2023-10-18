#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double c1[3], c2[3];
	cin >> c1[0] >> c1[1] >> c1[2];
	cin >> c2[0] >> c2[1] >> c2[2];
	double l = abs(c1[0] - c2[0]) * abs(c1[0] - c2[0]) + abs(c1[1] - c2[1]) * abs(c1[1] - c2[1]);
	l = sqrt(l);
	if (c1[2] + c2[2] > l) cout << "YES";
	else cout << "NO";
}