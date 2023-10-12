#include <iostream>
#include <string>

using namespace std;

int main() {
	string st;
	while (getline(cin, st)) {
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == 'i') cout << "e";
			else if (st[i] == 'e') cout << "i";
			else if (st[i] == 'I') cout << "E";
			else if (st[i] == 'E') cout << "I";
			else cout << st[i];
		}
		cout << "\n";
	}
}