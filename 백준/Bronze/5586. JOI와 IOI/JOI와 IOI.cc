#include <iostream>
#include <cstring>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)

using namespace std;

int main() {
	Sync;

	string st; in st;
	int J(0), I(0);
	Fori(st.size() - 2) 
		if (st[i] == 'J' && st[i + 1] == 'O' && st[i + 2] == 'I')
			J++;
		else if (st[i] == 'I' && st[i + 1] == 'O' && st[i + 2] == 'I')
			I++;
	out J endl << I;
}