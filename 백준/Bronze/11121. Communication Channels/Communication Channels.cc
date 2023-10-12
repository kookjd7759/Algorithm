#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		a == b ? cout << "OK" : cout << "ERROR";
		cout << "\n";
	}
}