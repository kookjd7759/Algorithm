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

ll ret[50][3]{
	0, 0, 0,
	0, 0, 1,
	0, 1, 1,
	1, 1, 1,
	-1, -1, -1,
	-1, -1, -1,
	-1, -1,	2,
	0, -1, 2,
	0, 0, 2,
	0, 1, 2,
	1, 1, 2,
	-2, -2,	3,
	7, 10, -11,
	-1, -1, -1,
	-1, -1, -1,
	-1,	2,	2,
	-511, -1609, 1626,
	1, 2, 2,
	-1, -2,	3,
	0, -2, 3,
	1, -2, 3,
	-11, -14, 16,
	-1, -1, -1,
	-1, -1, -1,
	-2901096694, -15550555555, 15584139827,
	-1, -1, 3,
	0, -1, 3,
	0, 0, 3,
	0, 1, 3,
	1, 1, 3,
	-283059965, -2218888517, 2220422932,
	-1, -1, -1,
	-1, -1, -1,
	8866128975287528, -8778405442862239, -2736111468807040,
	-1, 2, 3,
	0, 2, 3,
	1, 2, 3,
	0, -3, 4,
	1, -3, 4,
	117367, 134476, -159380,
	-1, -1, -1,
	-1, -1, -1,
	-80538738812075974, 80435758145817515, 12602123297335631,
	2, 2, 3,
	-5, -7, 8,
	2, -3, 4,
	-2, 3, 3,
	6, 7, -8,
	-23, -26, 31,
	-1, -1, -1
};

int main() {
	Sync;

	int n; in n;

	if (ret[n][0] == -1 && ret[n][1] == -1 && ret[n][2] == -1) out 0;
	else out ret[n][0] spc ret[n][1] spc ret[n][2];
}