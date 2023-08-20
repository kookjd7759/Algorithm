#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	a *= 100;
	if (a >= b)
		cout << "Yes";
	else
		cout << "No";
}