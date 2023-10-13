#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret(0);
	while (n--) {
		int a, b; cin >> a >> b;
		if (a == 136) ret += 1000;
		else if (a == 142) ret += 5000;
		else if (a == 148) ret += 10000;
		else if (a == 154) ret += 50000;
	}
	cout << ret;
}