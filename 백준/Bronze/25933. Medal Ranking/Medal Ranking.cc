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

	Testcase{
	int a[3], b[3];
	int aCnt(0), bCnt(0);
	Fori(3) in a[i], out a[i] << " ", aCnt += a[i];
	Fori(3) in b[i], out b[i] << " ", bCnt += b[i];
	ent;
	bool count = aCnt > bCnt;
	bool color = false;
	if (a[0] == b[0]) {
		if (a[1] == b[1]) {
			if (a[2] > b[2]) color = true;
		}
		else if (a[1] > b[1]) color = true;
	}
	else if (a[0] > b[0]) color = true;

	if (count && color) out "both";
	else if (color) out "color";
	else if (count) out "count";
	else out "none";
	ent; ent;
	};
}