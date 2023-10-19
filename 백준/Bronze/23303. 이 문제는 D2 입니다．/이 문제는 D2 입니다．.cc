#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; getline(cin, st);
	bool ch = false;
	for (int i = 0; i < st.size() - 1; i++) {
		if ((st[i] == 'D' || st[i] == 'd') && st[i + 1] == '2') {
			ch = true; break;
		}
	}
	ch ? cout << "D2" : cout << "unrated";
}