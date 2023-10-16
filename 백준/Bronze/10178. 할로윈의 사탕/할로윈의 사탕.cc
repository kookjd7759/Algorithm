#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s).\n";
	}
}