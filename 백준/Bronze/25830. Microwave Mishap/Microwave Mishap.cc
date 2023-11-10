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

	string time; in time;
	int wantSec(0), machinSec(0);
	wantSec += ((time[0] - '0') * 10 + (time[1] - '0')) * 60;
	wantSec += (time[3] - '0') * 10 + (time[4] - '0');

	machinSec += ((time[0] - '0') * 10 + (time[1] - '0')) * 3600;
	machinSec += ((time[3] - '0') * 10 + (time[4] - '0')) * 60;

	int retSec = machinSec - wantSec;

	int h = retSec / 3600; retSec %= 3600;
	int m = retSec / 60; retSec %= 60;
	int s = retSec;

	if (h < 10) out 0;
	out h << ":";

	if (m < 10) out 0;
	out m << ":";

	if (s < 10) out 0;
	out s;
}