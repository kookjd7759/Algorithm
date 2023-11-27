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

	int abc[3][2];
	Fori(3) Forj(2) in abc[i][j];

	int x = abc[1][0] - abc[2][0];
	int y = abc[1][1] - abc[2][1];
	out abc[0][0] + x spc abc[0][1] + y endl;
	x = -x;
	y = -y;
	out abc[0][0] + x spc abc[0][1] + y endl;
	
	x = abc[2][0] - abc[0][0];
	y = abc[2][1] - abc[0][1];
	out abc[1][0] + x spc abc[1][1] + y endl;
}