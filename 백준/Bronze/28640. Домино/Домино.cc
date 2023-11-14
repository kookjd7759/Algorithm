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

	string st1, st2; in st1 >> st2;
	int a[2]{ 0,0 }, b[2]{ 0,0 };
	int ver(0);
	Fori(st1.size()) {
		if (st1[i] == '|') {
			ver = 1;
			continue;
		}
		a[ver]++;
	}
	ver = 0;
	Fori(st2.size()) {
		if (st2[i] == '|') {
			ver = 1;
			continue;
		}
		b[ver]++;
	}
	if (a[0] == b[0] || a[1] == b[1] || a[0] == b[1] || a[1] == b[0]) out "Yes";
	else out "No";
}