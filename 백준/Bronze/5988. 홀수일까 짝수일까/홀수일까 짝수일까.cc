#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		string st; cin >> st;
		if ((((st[st.size() - 1]) - 48) & 1)) cout << "odd\n";
		else cout << "even\n";
	}
}