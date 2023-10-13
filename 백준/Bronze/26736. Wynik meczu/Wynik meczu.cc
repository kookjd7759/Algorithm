#include <iostream>

using namespace std;

int main() {
	string st; cin >> st;
	int A(0), B(0);
	for (int i = 0; i < st.size(); i++)
		st[i] == 'A' ? A++ : B++;
	cout << A << " : " << B;
}