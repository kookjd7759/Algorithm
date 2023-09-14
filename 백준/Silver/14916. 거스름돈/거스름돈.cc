#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	if (n < 10){
		if (n == 1 || n == 3)
			cout << -1;
		else if (n == 5)
			cout << 1;
		else if (n == 2 || n == 4 || n == 6 || n == 8)
			cout << n / 2;
		else if (n == 7)
			cout << 2;
		else 
			cout << 3;
	}
	else {
		int num = n % 10;
		if (num == 0 || num == 5)
			cout << n / 5;
		else if (num == 1)
			cout << 3 + ((n - 6) / 5);
		else if (num == 2)
			cout << 1 + ((n - 2) / 5);
		else if (num == 3)
			cout << 4 + ((n - 8) / 5);
		else if (num == 4)
			cout << 2 + ((n - 4) / 5);
		else if (num == 6)
			cout << 3 + ((n - 6) / 5);
		else if (num == 7)
			cout << 1 + ((n - 2) / 5);
		else if (num == 8)
			cout << 4 + ((n - 8) / 5);
		else 
			cout << 2 + ((n - 4) / 5);
	}		
}