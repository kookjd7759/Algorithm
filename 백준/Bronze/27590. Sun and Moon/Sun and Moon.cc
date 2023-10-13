#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int ds, ys; cin >> ds >> ys;
	int dm, ym; cin >> dm >> ym;
	int s = ys - ds, m = ym - dm;

	while (s != m) {
		if (s < m) s += ys;
		else m += ym;
	}
	cout << s;
}