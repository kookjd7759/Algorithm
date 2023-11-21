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

	auto win = [&](char me, char op) -> bool {
		if (me == 'S' && op == 'P') return true;
		else if (me == 'R' && op == 'S') return true;
		else if (me == 'P' && op == 'R') return true;
		return false;
		};

	char a[2], b[2];
	in a[0] >> a[1] >> b[0] >> b[1];

	if ((win(a[0], b[0]) && win(a[0], b[1])) ||
		(win(a[1], b[0]) && win(a[1], b[1]))) out "MS";
	else if ((win(b[0], a[0]) && win(b[0], a[1])) ||
		(win(b[1], a[0]) && win(b[1], a[1]))) out "TK";
	else out "?";
	
}