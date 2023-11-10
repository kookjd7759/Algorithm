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

	int day(0), des(0);
	int d, m, y, a; 
	
	in d >> m >> y >> a; if (a == 7) a = 0;
	day += d;
	day += m * 30;
	day += y * 360;

	in d >> m >> y;
	des += d;
	des += m * 30;
	des += y * 360;

	int dif = des - day;
	dif %= 7;
	int ret = (dif + a) % 7;
	if (ret == 0) ret = 7;
	out ret;
}