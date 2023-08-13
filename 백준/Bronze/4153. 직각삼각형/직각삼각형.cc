#include <iostream>

using namespace std;

string Func (int num1, int num2, int num3){
	num1 *= num1;
	num2 *= num2;
	num3 *= num3;

	if (num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1)
		return "right";
	else
		return "wrong";
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a = 1, b = 1, c = 1;
	
	while (a + b + c != 0) {
		cin >> a >> b >> c;
		if (a + b + c != 0)
			cout << Func(a, b, c) << "\n";
	}

	return 0;
}