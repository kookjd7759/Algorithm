#include <iostream>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main() {
	sync;

	int n; cin >> n;
	int od(0);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a & 1) od++;
	}
	od == ((n & 1) ? n / 2 + 1 : n / 2) ? cout << 1 : cout << 0;
}