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

	int n; in n;
	double mc(0), jc(0), ms(0), js(0);
	Roop(n) {
		char c; int a; in c >> a;
		if (c == 'M') {
			mc++;
			ms += a;
		}
		else {
			jc++;
			js += a;
		}
	}
	double aver_m, aver_j;
	if (!mc) aver_m = 0;
	else aver_m = ms / mc;
	if (!jc) aver_j = 0;
	else aver_j = js / jc;

	if (aver_m == aver_j) out "V";
	else out(aver_m > aver_j ? "M" : "J");
}