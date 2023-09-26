#include <iostream>

using namespace std;

int main() {
	cout << "Gnomes:\n";
	int n; cin >> n;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		if (a > b){
			if (b == c) cout << "Ordered\n";
			else b > c ? cout << "Ordered\n" : cout << "Unordered\n";
		}
		else if (a < b) {
			if (b == c) cout << "Ordered\n";
			else b < c ? cout << "Ordered\n" : cout << "Unordered\n";
		}
		else cout << "Ordered\n";
	}
}