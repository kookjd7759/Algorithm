#include <iostream>

using namespace std;

int main() {
	int cnt(0);
	while (true) { 
		int l, p, v; cin >> l >> p >> v;
		if (l + p + v == 0)
			break;
		cnt++;

		cout << "Case " << cnt << ": " << (v / p) * l + min(l, (v % p)) << "\n";
	}
}