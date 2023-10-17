#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		if (a >= b) cout << "MMM BRAINS\n";
		else cout << "NO BRAINS\n";
	}
}