#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a < 100)
		cout << 1;
	else {
		double num = (double)a - ((double)a / 100 * b);
		if (num < 100)
			cout << 1;
		else
			cout << 0;
	}
}