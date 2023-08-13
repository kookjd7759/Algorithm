#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> vec_num;
vector<bool> vec_Operator;
vector<int> vec_Minus;

int MaxSum() {
	int num = 0;
	for (const auto& iter : vec_Minus)
		num += iter;
	return num;
}

void Input() {
	string st; cin >> st;
	int num = 0;
	for (int i = 0; i < st.size(); i++) 
		if (st[i] > 47 && st[i] < 58) 
			num = num * 10 + st[i] - 48;
		else {
			vec_num.push_back(num);
			num = 0;

			if (st[i] == '+')
				vec_Operator.push_back(true);
			else
				vec_Operator.push_back(false);
		}

	vec_num.push_back(num);
}

void Func() {
	int result = vec_num[0];
	bool IsMinus = false;
	int num = 0;
	for (int i = 0; i < vec_Operator.size(); i++) {
		if (!vec_Operator[i]) {
			if (IsMinus) {
				vec_Minus.push_back(num);
				num = 0;
			}

			result -= vec_num[i + 1];
			IsMinus = true;
		} 
		else {
			if (IsMinus)
				num += vec_num[i + 1] * 2;

			result += vec_num[i + 1];
		}
	}

	vec_Minus.push_back(num);

	cout << result - MaxSum() << "\n";
}

int main() {
	Input();
	Func();

	return 0;
} 