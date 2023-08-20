#include <iostream>
#include <string>

using namespace std;

int main() {
	int K, A, D;
	int cnt(1);
	string st; cin >> st;
	string temp = "";
	for (int i = 0; i < st.length(); i++) {
		if (st[i] != '/') 
			temp.push_back(st[i]);
		else {
			if (cnt == 1)
				K = stoi(temp);
			else
				D = stoi(temp);
			temp = "";
			cnt++;
		}
	}
	A = stoi(temp);
	if ((K + A) < D or D == 0)
		cout << "hasu";
	else
		cout << "gosu";
}