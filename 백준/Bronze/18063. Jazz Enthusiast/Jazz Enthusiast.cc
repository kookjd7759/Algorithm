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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;

	int n, t; in n >> t;
	int total_sec(0);
	For1i(n) {
		string st; in st;
		int m = st[0] - '0';
		int s(0);
		s += (st[2] - '0') * 10;
		s += st[3] - '0';
		total_sec += m * 60 + s;
	}
	total_sec -= (n - 1) * t;
	int h = total_sec / 3600;
	int m = total_sec / 60 % 60;
	int s = total_sec % 60;

	if (h < 10) out 0;
	out h << ":";
	if (m < 10) out 0;
	out m << ":";
	if (s < 10) out 0;
	out s;
}