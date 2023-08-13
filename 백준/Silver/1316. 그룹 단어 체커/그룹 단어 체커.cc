#include<iostream>
#include <string>

using namespace std;

int main() {
	int num; cin >> num;
	int count = 0;
	bool IsYes;

	for (int i = 0; i < num; i++) {
		bool En[26] = { false, };
		IsYes = true;
		string st; cin >> st;

		En[(int)st.at(0) - 97] = true;

		for (int i = 1; i < st.length(); i++) {
			if (st.at(i - 1) != st.at(i))
				if (!En[(int)st.at(i) - 97])
					En[(int)st.at(i) - 97] = true;
				else {
					IsYes = false;
					break;
				}
		}

		if (IsYes)
			count++;
	}

	cout << count;
}