#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		string st; cin >> st;
		cout << st[0] + st[2] - 96 << "\n";
	}
}