#include<iostream>
#include <string>

using namespace std;

int main() {
	string st;
	getline(cin, st);

	int count = 0;
	bool On = false;

	if (st.length() > 0){
		for (int i = 0; i < st.length(); i++) {
			if (st.at(i) != ' ') {
				if (!On) {
					On = true;
					count += 1;
				}
			}
			if (st.at(i) == ' ')
				On = false;
		}
	}
	

	cout << count;
}