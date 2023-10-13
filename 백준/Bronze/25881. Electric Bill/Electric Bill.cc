#include <iostream>

using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int n; cin >> n;
	while (n--) {
		int temp; cin >> temp;
		cout << temp << " ";
		if (temp <= 1000) cout << temp * a << "\n";
		else cout << a * 1000 + (temp - 1000) * b << "\n";
	}
}