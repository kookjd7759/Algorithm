#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num; cin >> num;
	for (int i = 0; i < num / 5; i++)
		cout << "V";

	for (int i = 0; i < num % 5; i++)
		cout << "I";
}
