#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int p1(0), p2(0);
		while (n--) {
			char a, b; cin >> a >> b;
			if (a == b) continue;
			
			if (a == 'R') {
				if (b == 'S') p1++;
				else p2++;
			}
			else if (a == 'S') {
				if (b == 'P') p1++;
				else p2++;
			}
			else if (a == 'P') {
				if (b == 'R') p1++;
				else p2++;
			}
		}

		if (p1 == p2) cout << "TIE\n";
		else p1 > p2 ? cout << "Player 1\n" : cout << "Player 2\n";
	}
}