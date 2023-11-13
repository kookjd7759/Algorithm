#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;

	string st;
	int n; in n; getline(cin, st);
	while (n--) {
		getline(cin, st);
		Fori(st.size()) {
			if (st[i] == 'y') out 'a';
			else if (st[i] == 'a') out 'e';
			else if (st[i] == 'e') out 'i';
			else if (st[i] == 'i') out 'o';
			else if (st[i] == 'o') out 'u';
			else if (st[i] == 'u') out 'y';
			else if (st[i] == 'Y') out 'A';
			else if (st[i] == 'A') out 'E';
			else if (st[i] == 'E') out 'I';
			else if (st[i] == 'I') out 'O';
			else if (st[i] == 'O') out 'U';
			else if (st[i] == 'U') out 'Y';
			else out st[i];
		}
		ent;
	}
}