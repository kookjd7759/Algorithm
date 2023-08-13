#include<iostream>

using namespace std;

int main() {
	long int a, b, c; cin >> a; cin >> b; cin >> c;
	long int result;
	if (c == b)
		result = -1;
	else 
		result = a / (c - b);

	if (result < 0)
		cout << - 1;
	else
		cout << result + 1;
}