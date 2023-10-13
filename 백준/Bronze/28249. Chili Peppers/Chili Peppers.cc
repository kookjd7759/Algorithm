#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n; cin >> n;
	int ret(0);
	while (n--) {
		string st; cin >> st;
		if (st[0] == 'P') ret += 1500;
		else  if (st[0] == 'M') ret += 6000;
		else  if (st[0] == 'S') ret += 15500;
		else  if (st[0] == 'C') ret += 40000;
		else  if (st[0] == 'T') ret += 75000;
		else  if (st[0] == 'H') ret += 125000;
	}
	cout << ret;
}