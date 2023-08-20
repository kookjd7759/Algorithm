#include <iostream>

using namespace std;

int main() {
	int num; cin >> num;
	if (num % 5 == 0)
		cout << num / 5;
	else
		cout << num / 5 + 1;
}