#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char arr[8]{ 'h', 'a','b','c','d','e','f','g' };
	int n; cin >> n;
	cout << arr[n % 8] << ((n - 1) / 8 + 1);
}