#include<iostream>
#include <string>

using namespace std;

int main() {
	string st; cin >> st;
	int sec = 0;

	for (int i = 0; i < st.length(); i++) {
		if ((int)st.at(i) >= 65 && (int)st.at(i) <= 67)
			sec += 3;
		else if ((int)st.at(i) >= 68 && (int)st.at(i) <= 70)
			sec += 4;
		else if ((int)st.at(i) >= 71 && (int)st.at(i) <= 73)
			sec += 5;
		else if ((int)st.at(i) >= 74 && (int)st.at(i) <= 76)
			sec += 6;
		else if ((int)st.at(i) >= 77 && (int)st.at(i) <= 79)
			sec += 7;
		else if ((int)st.at(i) >= 80 && (int)st.at(i) <= 83)
			sec += 8;
		else if ((int)st.at(i) >= 84 && (int)st.at(i) <= 86)
			sec += 9;
		else
			sec += 10;
	}

	cout << sec;
}