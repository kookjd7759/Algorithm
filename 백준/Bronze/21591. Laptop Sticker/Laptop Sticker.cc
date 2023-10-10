#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int ta, tb; cin >> ta >> tb;;
	a -= ta; b -= tb;
	if (a > 1 && b > 1) cout << 1;
	else cout << 0;
}