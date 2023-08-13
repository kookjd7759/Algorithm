#include<iostream>

using namespace std;

int main() {
	int X; cin >> X;
	bool IsUp = false;
	int Def, i = 0, result = 1;

	for (int num = 1; X >= num; i++){
		num += i;

		if (IsUp)
			IsUp = false;
		else
			IsUp = true;

		result = num - i;

		if (X < num)
			break;

	}

	Def = X - result;

	if (!IsUp) {
		cout << i - Def << "/" << 1 + Def;
	}
	else {
		cout << 1 + Def << "/" << i - Def;
	}
}