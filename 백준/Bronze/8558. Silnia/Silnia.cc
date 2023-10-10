#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	int ret = 1;
	for (int i = 2; i <= n; i++){
		ret *= i;
		ret %= 10;
	}
	cout << ret;
}