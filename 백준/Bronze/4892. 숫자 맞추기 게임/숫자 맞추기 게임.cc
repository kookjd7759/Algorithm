#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int idx(0);
	while (true) {
		int n; cin >> n;
		if (!n) break;
		idx++; cout << idx << ". ";

		int n1 = n * 3;
		int n2;
		if (n1 & 1) {
			cout << "odd ";
			n2 = (n1 + 1) / 2;
		}
		else {
			cout << "even ";
			n2 = n1 / 2;
		}
		int n3 = n2 * 3;
		int n4 = n3 / 9;
		cout << n4 << "\n";
	}
}