#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int s(0), t(0);
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++)
		st[i] == 's' ? s++ : t++;

	for (int i = 0; i < st.size(); i++) {
		if (s == t) {
			for (int j = i; j < st.size(); j++)
				cout << st[j];
			break;
		}
		else st[i] == 's' ? s-- : t--;
	}
}