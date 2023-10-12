#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << fixed; cout.precision(1);
	int cnt(1);
	while (true) {
		int n; cin >> n;
		if (!n) break;

		double prev;
		for (int i = 1; i <= n; i++) {
			double temp; cin >> temp;
			if ((n & 1) && i == (n + 1) / 2)
				cout << "Case " << cnt << ": " << temp << "\n";
			else if (!(n & 1) && i == (n / 2))
				prev = temp;
			else if (!(n & 1) && i == (n / 2) + 1)
				cout << "Case " << cnt << ": " << (temp + prev) / 2.0 << "\n";
		}
		cnt++;
	}
}