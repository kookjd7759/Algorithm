#include <iostream>

using namespace std;

int main() {
	int n, k; cin >> n >> k; k+= 60;
	if (n > k) cout << k * 1500 + (n - k) * 3000;
	else cout << n * 1500;
}