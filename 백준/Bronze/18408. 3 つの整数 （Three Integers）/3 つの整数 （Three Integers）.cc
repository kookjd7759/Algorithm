#include <iostream>

using namespace std;

int main() {
	int n[3] {0, 0, 0};
	int s = 3;
	while (s--){ int a; cin >> a; n[a]++; }
	n[1] > n[2] ? cout << 1 : cout << 2;
}
