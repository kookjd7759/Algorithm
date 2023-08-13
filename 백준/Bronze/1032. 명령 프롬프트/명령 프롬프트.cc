#include <iostream>

using namespace std;
char str[50];

int main() {
	int size; cin >> size;
	string st; cin >> st;
	int st_size = st.length();

	for (int i = 0; i < st_size; i++)
		str[i] = st[i];

	for (int i = 0; i < size - 1; i++) {
		string st_; cin >> st_;

		for (int i = 0; i < st_size; i++) 
			if (str[i] != st_[i]) 
				str[i] = '?';
	}
	
	for (int i = 0; i < st_size; i++)
		cout << str[i];
}

