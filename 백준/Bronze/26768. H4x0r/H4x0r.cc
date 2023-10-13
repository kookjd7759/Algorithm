#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) {
		if (st[i] == 'a') cout << "4";
		else if (st[i] == 'e') cout << "3";
		else if (st[i] == 'i') cout << "1";
		else if (st[i] == 'o') cout << "0";
		else if (st[i] == 's') cout << "5";
		else cout << st[i];
	}
}