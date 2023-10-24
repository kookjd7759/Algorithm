#include <iostream>
#include <string>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Spc << " " <<
#define Endl << "\n"

using namespace std;

int main() {
	Sync;

	string st; 
	while (getline(cin, st)) {
		int s(0), b(0), n(0), sp(0);
		for (int i = 0; i < st.size(); i++) {
			if (st[i] >= 'A' && st[i] <= 'Z') b++;
			else if (st[i] >= 'a' && st[i] <= 'z') s++;
			else if (st[i] >= '0' && st[i] <= '9') n++;
			else if (st[i] == ' ') sp++;
		}
		cout << s Spc b Spc n Spc sp Endl;
	}
}