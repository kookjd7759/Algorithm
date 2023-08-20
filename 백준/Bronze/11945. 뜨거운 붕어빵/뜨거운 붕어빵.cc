#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	for (int i = 0; i < a; i++) {
		string st; cin >> st;
		for (int i = b - 1; i >= 0; i--)
			cout << st[i];
		cout << "\n";
	}
}