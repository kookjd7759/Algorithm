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

	int a, score[50], cnt(1); Fori(50) in score[i];
	in a;
	Fori(50) {
		if (a == score[i]) break;
		cnt++;
	}
	if (cnt <= 5) out "A+";
	else if (cnt <= 15)  out "A0";
	else if (cnt <= 30)  out "B+";
	else if (cnt <= 35)  out "B0";
	else if (cnt <= 45)  out "C+";
	else if (cnt <= 48)  out "C0";
	else out "F";
}