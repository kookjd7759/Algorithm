#include<iostream>
#include <string>

using namespace std;

int main() {
	string st; cin >> st;
	int count = 0, num;

	for (int i = 0; i < st.length(); i++) { // 97 ~ 122
		num = 0;

		if (i != st.length() - 1) {
			if ((int)st.at(i + 1) >= 97 && (int)st.at(i + 1) <= 122) {
				if (i + 2 <= st.length() - 1)
					if (st.at(i) == 'd')
						if (st.at(i + 1) == 'z')
							if (st.at(i + 2) == '=')
								num = 2;

				if (st.at(i + 1) == 'j')
					if (st.at(i) == 'l' || st.at(i) == 'n')
						num = 1;
			}
			else {
				num = 1;
			}
		}

		i += num;
		count++;
	}

	cout << count;
}