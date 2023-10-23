#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int c1(0), c2(0), c3(0), non(0);
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		if (a == 1) non++;
		else if (b == 1 || b == 2) c1++;
		else if (b == 3) c2++;
		else if (b == 4) c3++;
	}
	cout << c1 << "\n" << c2 << "\n" << c3 << "\n" << non;
}