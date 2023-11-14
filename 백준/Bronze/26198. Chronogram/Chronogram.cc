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
	
	int t; in t;
	string st; getline(cin, st);
	while (t--) {
		getline(cin, st);
		int ret(0);
		Fori(st.size()) {
			if (st[i] == 'I') ret++;
			else if (st[i] == 'V') ret += 5;
			else if (st[i] == 'X') ret += 10;
			else if (st[i] == 'L') ret += 50;
			else if (st[i] == 'C') ret += 100;
			else if (st[i] == 'D') ret += 500;
			else if (st[i] == 'M') ret += 1000;
		}
		out ret endl;
	}
}