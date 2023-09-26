#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++){
		if (i != 0 && i % 10 == 0) cout << "\n";
		cout << st[i];
	}
}