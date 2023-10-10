#include <iostream>

using namespace std;

int main() {
	int n, a, b; cin >> n >> a >> b;
	a = max(n - a, a); 
	b = max(n - b, b);
	cout << a * b * 4;
}
