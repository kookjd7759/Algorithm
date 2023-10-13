#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int a(0), b(0);
	for (int i = 0; i < st.size(); i++) st[i] == 'B' ? a++ : b++;
	cout << a / 2 + b / 2;
}