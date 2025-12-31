#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;
	
	int tc; cin >> tc;
	while (tc--) {
		int x, sum(0); cin >> x; x++;
		for (int i = 0; i < x; ++i) {
			char c; cin >> c; 
			if (c == '!') sum = 100;
			else sum += (c - '0');

			if (i == x - 1) continue;
			char t; cin >> t;
		}
		if (sum > 9) cout << "!\n";
		else cout << sum << "\n";
	}

	return 0;
}
