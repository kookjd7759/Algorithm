#include <iostream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string st; getline(cin, st);
		if (st == "END")
			break;

		for (int i = st.size() - 1; i >= 0; i--)
			cout << st[i];
		cout << "\n";
	}
}