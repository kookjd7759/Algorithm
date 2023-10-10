#include <iostream>

using namespace std;

int main() {
	bool MOBIS[5] {0, 0, 0, 0, 0};
	string st; cin >> st;
	for (int i = 0; i < st.size(); i++) 
		if (st[i] == 'M') MOBIS[0] = true;
		else if (st[i] == 'O') MOBIS[1] = true;
		else if (st[i] == 'B') MOBIS[2] = true;
		else if (st[i] == 'I') MOBIS[3] = true;
		else if (st[i] == 'S') MOBIS[4] = true;
	
	bool ch = true;
	for (int i = 0; i < 5; i++) if (!MOBIS[i]) {ch = false; break;}
	ch ? cout << "YES" : cout << "NO";
}
