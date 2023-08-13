#include <iostream>
#include <string>

using namespace std;

const int64_t M = 1234567891;

int64_t pow(int num1, int num2) {
	int64_t result = 1;
	for (int i = 0; i < num2; i++)
		result = (result % M) * num1;

	return result % M;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int No; cin >> No;
	int64_t Sum = 0;
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) {
		int64_t num = pow(31, i);
		Sum += (((int64_t)st[i] - 96) * num) % M;
		Sum %= M;
	}

	cout << Sum;

	return 0;
}