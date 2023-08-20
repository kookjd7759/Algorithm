#include <iostream>
#include <string>

using namespace std;

int main() {
	string st; cin >> st;

	if (st.size() == 2)
		cout << (st[0] - 48) + (st[1] - 48);
	else if (st.size() == 3)
		if (st[1] == '0')
			cout << 10 + (st[2] - 48);
		else
			cout << 10 + (st[0] - 48);
	else
		cout << 20;
}