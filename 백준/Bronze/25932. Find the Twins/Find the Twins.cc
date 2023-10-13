#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		bool z = false, m = false;
		for (int i = 0; i < 10; i++) {
			int temp; cin >> temp; cout << temp << " ";
			if (temp == 17) z = true;
			else if (temp == 18) m = true;
		} cout << "\n";

		if (z && m) cout << "both\n\n";
		else if (z && !m) cout << "zack\n\n";
		else if (!z && m) cout << "mack\n\n";
		else cout << "none\n\n";
	}
}