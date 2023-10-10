#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int x(0), y(0);
	while(n--){
		char ch; cin >> ch;
		if (abs(x - y) >= 2) continue;
		if (ch == 'D') x++; else y++;
	}
	cout << x << ":" << y;
}
