#include <iostream>

using namespace std;

int pow(int a, int b) {
	int result = a;
	b--;
	while (b--) 
		result *= a;
	return result;
}

int main() {
	int n; cin >> n;
	cout << pow((pow(2, n) + 1), 2);
}