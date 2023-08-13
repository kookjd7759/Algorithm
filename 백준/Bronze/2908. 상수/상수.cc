#include<iostream>
#include <string>

using namespace std;

int main() {
	string num1; cin >> num1;
	string num2; cin >> num2;
	string result;

	bool IsNum1 = false;
	
	for (int i = 2; i >= 0; i--) {
		if ((int)num1.at(i) > (int)num2.at(i)) {
			IsNum1 = true;
			break;
		}
		if ((int)num1.at(i) < (int)num2.at(i)) {
			IsNum1 = false;
			break;
		}
	}
	
	if (IsNum1) result = num1;
	else result = num2;

	for (int i = 2; i >= 0; i--) {
		cout << result.at(i);
	}
}