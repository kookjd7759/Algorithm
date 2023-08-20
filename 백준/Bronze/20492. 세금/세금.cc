#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	cout << n - (n / 100 * 22) << " " << (n / 100 * 80) + (n / 100 * 20) - ((n / 100 * 20) / 100 * 22);
}