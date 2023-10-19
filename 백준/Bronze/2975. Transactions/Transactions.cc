#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		int s, q; char c;
		cin >> s >> c >> q;
		if (!s && !q && c == 'W') break;

		if (c == 'W') {
			if (s - q < -200) cout << "Not allowed\n";
			else cout << s - q << "\n";
		}
		else cout << s + q << "\n";
	}
}