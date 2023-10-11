#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	long long ret(0);
	for (int i = 1; i <= n; i++) ret += i * i * i;
	cout << ret;
}