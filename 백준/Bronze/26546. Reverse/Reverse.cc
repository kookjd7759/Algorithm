#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		string st; cin >> st;
		int a, b; cin >> a >> b; b--;
		for (int i = 0; i < st.size(); i++) {
			if (i >= a && i <= b) continue;
			cout << st[i];
		}
		cout << "\n";
	}
}