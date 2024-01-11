#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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
	
	int xU, xD, yU, yD, s;
	in xU >> xD >> yU >> yD >> s;
	int xtime = s % (xU + xD);
	int ytime = s % (yU + yD);

	int x = (xU - xD) * (s / (xU + xD));
	int y = (yU - yD) * (s / (yU + yD));

	if (xtime >= xU) {
		xtime -= xU;
		x += xU;
		x -= xtime;
	}
	else x += xtime;
	
	if (ytime >= yU) {
		ytime -= yU;
		y += yU;
		y -= ytime;
	}
	else y += ytime;

	if (x == y) out "Tied";
	else out(x > y ? "Nikky" : "Byron");
}