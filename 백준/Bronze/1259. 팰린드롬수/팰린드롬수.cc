#include <iostream>
#include <string>

using namespace std;

int main() {
	string st = "";
	while (true) {
		cin >> st;
		int size = st.size();
		bool IsYes = true;
		for (int i = 0; i < size; i++) {
			// cout << st[i] << " " << st[size - i - 1] << "\n";
			if (st[i] != st[size - i - 1]) {
				IsYes = false;
				break;
			}
		}

		if (st == "0")
			exit(0);

		if (IsYes)
			cout << "yes \n";
		else 
			cout << "no \n";
	}

	return 0;
}