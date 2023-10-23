#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string st; cin >> st;
	int bigdata(0), secur(0);
	for (int i = 0; i < st.size(); i++) {
		if (st[i] == 'b'){
			if (i + 6 < st.size()) {
				if (st[i + 1] == 'i' && st[i + 2] == 'g' &&
					st[i + 3] == 'd' && st[i + 4] == 'a' &&
					st[i + 5] == 't' && st[i + 6] == 'a') {
					bigdata++;
				}
			}
		}
		else if (st[i] == 's') {
			if (i + 7 < st.size()) {
				if (st[i + 1] == 'e' && st[i + 2] == 'c' &&
					st[i + 3] == 'u' && st[i + 4] == 'r' &&
					st[i + 5] == 'i' && st[i + 6] == 't' && st[i + 7] == 'y') {
					secur++;
				}
			}
		}
	}
	if (bigdata >= secur) cout << "bigdata? ";
	if (secur >= bigdata) cout << "security!";
}