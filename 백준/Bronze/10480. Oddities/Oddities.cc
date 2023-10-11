#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--){
		int x; cin >> x;
		cout << x << " is ";
		(x & 1) ? cout << "odd\n" : cout << "even\n";
	}
}