#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		cout << "Data set: " << a << " " << b << " " << c << "\n";
		while (c--) {
			if (a > b) 
				a >>= 1;
			else 
				b >>= 1;
		}
		cout << max(a, b) << " " << min(a, b) << "\n\n";
	}
}