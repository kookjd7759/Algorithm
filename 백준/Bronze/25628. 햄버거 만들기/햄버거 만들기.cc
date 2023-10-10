#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a & 1) a--;
	a /= 2;
	
	cout << min(a, b);
}
