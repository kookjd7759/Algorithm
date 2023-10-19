#include <iostream>
#include <cmath>

using namespace std;

int cal(int a, int b, char op) {
	if (op == '+') return a + b;
	else if (op == '-') return a - b;
	else if (op == '*') return a * b;
	else return a / b;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b, c; char op1, op2;
	cin >> a >> op1 >> b >> op2 >> c;

	int cal_1 = cal(cal(a, b, op1), c, op2);
	int cal_2 = cal(a, cal(b, c, op2), op1);
	cal_1 < cal_2 ? cout << cal_1 << "\n" << cal_2 : cout << cal_2 << "\n" << cal_1;
}