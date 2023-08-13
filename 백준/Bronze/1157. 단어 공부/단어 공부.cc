#include<iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int ar[26] = {0, };
	int max, maxID = 0;

	for (int i = 0; i < st.length(); i++) { // (소) -97, (대) - 65
		if ((int)st.at(i) > 94) { // 소문자
			ar[st.at(i) - 97] += 1;
		}
		else { // 대문자
			ar[st.at(i) - 65] += 1;
		}
	}

	for (int i = 1; i < 26; i++) {
		if (i == 1) max = ar[0];
		
		if (ar[i] > max) {
			max = ar[i];
			maxID = i;
		}
	}

	for (int i = 1; i < 26; i++) {
		if (ar[i] == max && i != maxID) {
			cout << "?";
			return 0;
		}
	}

	cout << (char)(maxID + 65);
}