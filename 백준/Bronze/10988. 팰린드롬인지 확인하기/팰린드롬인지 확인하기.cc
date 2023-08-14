#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int size = st.length();

	int i = 0;
	bool YN = 1;
	while (i <= (size / 2)) {
		if (st[i] != st[size - 1 - i]) {
			YN = 0;
			break;
		}
		i++;
	}

	if (YN)
		cout << "1";
	else
		cout << "0";
}

