#include <iostream>

using namespace std;

int main() {
	int n, cnt(1); cin >> n;
	for (int i = 1; i <= n; i++, cnt++){
		cout << i << " ";
		if (cnt % 6 == 0) cout << "Go! ";
	}
	if (cnt % 6 != 1) cout << "Go! ";
}