#include <iostream>
#include <string>

using namespace std;

int main() {
	string st; cin >> st;
	for (int i = 0; i < st.length(); i++) 
		st[i] = toupper(st[i]);

	cout << st;
}