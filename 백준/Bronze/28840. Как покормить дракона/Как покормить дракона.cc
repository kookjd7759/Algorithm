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

	string a, b; in a >> b;
	int ta(0), tb(0);
	ta += ((a[0] - '0') * 10 + (a[1] - '0')) * 60;
	ta += (a[3] - '0') * 10 + (a[4] - '0');

	tb += ((b[0] - '0') * 10 + (b[1] - '0')) * 60;
	tb += (b[3] - '0') * 10 + (b[4] - '0');

	int ret = 24 * 60 - ta + tb;
	
	int h = ret / 60;
	int m = ret % 60;
	if (h < 10) out 0;
	out h << ":";
	if (m < 10) out 0;
	out m;
}