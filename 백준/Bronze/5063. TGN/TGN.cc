#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int r, e, c; cin >> r >> e >> c;
		int n = r, y = e - c;
		if (n > y) cout << "do not advertise\n";
		else if (n < y) cout << "advertise\n";
		else cout << "does not matter\n";
	}
}