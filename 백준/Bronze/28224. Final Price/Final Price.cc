#include <iostream>

using namespace std;

int main() {
	int n, ret(0); cin >> n;
	while (n--) {
		int num; cin >> num;
		ret += num;
	}
	cout << ret;
}