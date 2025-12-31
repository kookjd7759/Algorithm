#include <iostream>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	int a, t; cin >> a >> t;
	cout << max(0, 10 + 2 * (25 - a + t));

	return 0;
}
