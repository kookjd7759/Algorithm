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

	int time[3][3];
	Fori(3) Forj(3) in time[i][j];

	int sec(0);
	sec += time[2][0] * time[0][1] * time[0][2];
	sec += time[2][1] * time[0][2];
	sec += time[2][2];
	out(sec / (time[1][1] * time[1][2])) spc(sec % (time[1][1] * time[1][2]) / time[1][2])
		spc(sec % time[1][2]);
}