#include <iostream>
#include <string>

using namespace std;

int alpha[26];

int main() {
	for (int i = 0; i < 26; i++)
		alpha[i] = 0;

	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) {
		int index = (int)st[i] - 97;
		alpha[index]++;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
}