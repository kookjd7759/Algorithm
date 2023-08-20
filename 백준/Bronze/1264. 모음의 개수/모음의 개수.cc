#include <iostream>
#include <string>

using namespace std;

int main() {
	while (true) {
		string st; getline(cin, st);
		int cnt(0);
		if (st == "#")
			break;

		for (int i = 0; i < st.size(); i++) {
			int num = (int)st[i];
			if (num == 65 or num == 97 or num == 69 or num == 101
				or num == 73 or num == 105 or num == 79 or num == 111
				or num == 85 or num == 117)
				cnt++;
		}
		cout << cnt << "\n";
	}
}