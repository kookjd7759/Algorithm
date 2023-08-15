#include <iostream>
#include <cmath>

using namespace std;

int getNumber(char ch) {
	if (ch >= 48 and ch <= 57)
		return ch - 48;

	if (ch >= 65 and ch <= 90)
		return ch - 55;
}

int main() {
	string st; int ver;
	cin >> st >> ver;
	int st_size = st.size();
	int result = 0;

	for (int i = 0; i < st_size; i++) 
		result += getNumber(st[st_size - 1 - i]) * pow(ver, i);

	cout << result;
}