#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; n--;
		cout << "Denominations: ";
		int prev; cin >> prev; cout << prev << " ";
		bool ch = true;
		while (n--) {
			int temp; cin >> temp; cout << temp << " ";
			if (prev * 2 > temp) ch = false;
			prev = temp;
		}
		cout << "\n";

		ch ? cout << "Good coin denominations!\n\n" : cout << "Bad coin denominations!\n\n";
	}
}