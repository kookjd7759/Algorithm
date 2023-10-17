#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int sum(0);
	for (int i = 1; i <= n; i++)
		if (n % i == 0) sum += i;
	cout << sum * 5 - 24;
}