#include <iostream>

using namespace std;

int main() {
	int Cn; cin >> Cn;
	int n(1);
	while (true) {
		if (Cn == 1) break;

		if (Cn & 1) Cn = 3 * Cn + 1;
		else Cn /= 2;
		n++;
	}
	cout << n;
}