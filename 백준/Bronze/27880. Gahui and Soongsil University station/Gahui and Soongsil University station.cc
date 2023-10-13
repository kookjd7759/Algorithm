#include <iostream>

using namespace std;

int main() {
	int ret(0);
	for (int i = 0; i < 4; i++) {
		string st; int n; cin >> st >> n;
		ret += n * (st == "Es" ? 21 : 17);
	}
	cout << ret;
}