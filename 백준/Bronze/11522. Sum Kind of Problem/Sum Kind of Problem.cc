#include <iostream>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main() {
	sync;

	int t; cin >> t;
	while (t--) {
		int n, a; cin >> n >> a;
		cout << n << " ";
		cout << (1 + a) * a / 2 << " " << a * a << " " << a * a + a << "\n";
	}
}