#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		while (n--){
			int a, b; cin >> a >> b;
			cout << a + b << " " << a * b << "\n";
		}
	}
}