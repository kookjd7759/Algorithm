#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int a(0), b(0);
	for (int i = 0; i < st.size(); i += 2) {
		if (st[i] == 'A') a += st[i + 1] - 48;
		else b += st[i + 1] - 48;
	}
	a > b ? cout << "A" : cout << "B";
}