#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
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

	Testcase{
	string st; in st;
	if (st.size() != 7) out 0;
	else {
		bool alpaCH = true;
		Fori(7) if (!('A' <= st[i] && st[i] <= 'Z')) {
			alpaCH = false;
			break;
		}
		if (!alpaCH) out 0;
		else if ((st[0] == st[1] && st[0] == st[4] && st[0] &&
			st[2] == st[3] && st[2] == st[5] && st[2] == st[6]) &&
			st[0] != st[2])
			out 1;
		else out 0;
	}
	ent;
	};
}