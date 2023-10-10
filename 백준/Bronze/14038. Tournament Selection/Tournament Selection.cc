#include <iostream>

using namespace std;

int main() {
	int ret(0), size = 6; 
	for (int i = 0; i < size; i++) { 
		char ch; cin >> ch;
		if (ch == 'W') ret++;
	}
	if (ret <= 0) cout << -1;
	else if (ret <= 2) cout << 3;
	else if (ret <= 4) cout << 2;
	else cout << 1;
}
