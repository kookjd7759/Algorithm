#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string st; cin >> st;
		char prev = ' ';
		for (int i = 0; i < st.size(); i++)
			if (prev != st[i]){
				cout << st[i];
				prev = st[i];
			}
		cout << "\n";
	}
}