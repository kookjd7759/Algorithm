#include <iostream>

using namespace std;

int main() {
	int n[3]; cin >> n[0] >> n[1] >> n[2];
	if (n[0] == n[1] + n[2] || n[1] == n[0] + n[2] || n[2] == n[0] + n[1])
		cout << 1;
	else if (n[0] == n[1] * n[2] || n[1] == n[0] * n[2] || n[2] == n[0] * n[1])
		cout << 2;
	else cout << 3;
}