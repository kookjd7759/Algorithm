#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
	while (t--) {
		int d; cin >> d;
		int ret(0);
		for (int i = 1; i * i + i <= d; i++)
			ret = i;
		cout << ret << "\n";
	}
}