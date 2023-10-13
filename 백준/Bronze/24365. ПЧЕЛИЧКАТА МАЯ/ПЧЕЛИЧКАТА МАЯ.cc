#include <iostream>

using namespace std;

int main() {
	int n[3]; cin >> n[0] >> n[1] >> n[2];
	int ret(0);
	while (n[0] != n[1] || n[1] != n[2]) {
		if (n[1] >= n[2]) { n[1]--; n[0]++; ret++; }
		else { n[2]--; n[1]++; ret++; }
	}
	cout << ret;
}