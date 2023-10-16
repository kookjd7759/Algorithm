#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n[4]; cin >> n[0] >> n[1] >> n[2] >> n[3];
	sort(n, n + 4);
	cout << n[0] * n[2];
}