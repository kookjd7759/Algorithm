#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k, a, b; cin >> n >> k >> a >> b;
	cout << ((k - 1) + (n - 1)) * b << " " << (n - 1) * a;
}
