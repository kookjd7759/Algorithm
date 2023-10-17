#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int k = 1; k <= n; k++) {
		string st; cin >> st;
		cout << "String #" << k << "\n";
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == 'Z') st[i] = 'A';
			else st[i]++;
			cout << st[i];
		}
		cout << "\n\n";
	}
}