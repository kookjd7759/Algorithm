#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int ret(1);
	for (int i = 1; i <= 3; i++) ret *= n - i;
	cout << ret / 6;
}