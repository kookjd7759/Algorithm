#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	a += b; while (a > 12) a -= 12;
	cout << a;
}