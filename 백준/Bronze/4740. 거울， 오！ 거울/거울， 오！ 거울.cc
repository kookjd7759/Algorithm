#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true) {
		string st; getline(cin, st);
		if (!st.compare("***")) break;
		for (int i = st.size() - 1; i >= 0; i--)
			cout << st[i];
		cout << "\n";
	}
}