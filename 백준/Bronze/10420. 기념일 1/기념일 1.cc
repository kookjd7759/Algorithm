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

int visited[1001][1001];
int main() {
	Sync;
	
	int y = 2014, m = 4, d = 2, n; in n; n--;
	while (n--) {
		d++;
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
			if (d == 32) m += 1, d = 1;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d == 31) m += 1, d = 1;
		}
		else if (m == 12) {
			if (d == 32) y += 1, m = 1, d = 1;
		}
		else if (m == 2) {
			bool c = false;
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) c = true;
			if (d == 29 && !c) m += 1, d = 1;
			if (d == 30 && c) m += 1, d = 1;
		}
	}

	out y << "-";
	if (m < 10) out 0;
	out m << "-";
	if (d < 10) out 0;
	out d;
}