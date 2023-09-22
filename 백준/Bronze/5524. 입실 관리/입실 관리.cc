#include <iostream>

using namespace std;

int main(){
	int t; cin >> t;
	for (int i = 0; i < t; i++){
		string st; cin >> st;
		for (int j = 0; j < st.size(); j++)
			st[j] <= 90 ? cout << (char)(st[j] + 32) : cout << st[j];
		cout << "\n";
	}
}