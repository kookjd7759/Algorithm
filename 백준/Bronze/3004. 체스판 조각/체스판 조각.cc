#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	if (n & 1) cout << (n / 2 + 1) * (n / 2 + 2);
	else cout << (n / 2 + 1) * (n / 2 + 1);
}