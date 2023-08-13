#include <iostream>
#include <stack>

using namespace std;

int main() {
	string num1, num2; cin >> num1 >> num2;
	int temp = 0;

	stack<int> result;

	if (num1.size() < num2.size()) {
		string temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	int def = num1.size() - num2.size();

	for (int i = num1.size() - 1; i >= 0; i--) {
		temp += (int)num1.at(i) - 48;

		if (i - def >= 0) {
			temp += (int)num2.at(i - def) - 48;
		}

		if (temp < 10) {
			result.push(temp);
			temp = 0;
		}
		else {
			result.push(temp % 10);
			temp = 1;
		}
	}

	if (temp == 1)
		result.push(temp);

	for (int i = 0, max = result.size(); i < max; i++) {
		cout << result.top();
		result.pop();
	}
}