#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	string st; getline(cin, st);
	while (t--) {
		getline(cin, st);
		if (st[0] >= 'a' && st[0] <= 'z')
			cout << (char)(st[0] - 32);
		else cout << st[0];
		for (int i = 1; i < st.size(); i++)
			cout << st[i];
		cout << "\n";
	}
}