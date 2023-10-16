#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, sum(0);
	while (cin >> n) {
		sum += n;
	}
	cout << sum;
}