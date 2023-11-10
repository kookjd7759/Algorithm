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
	int NSWE[4]; memset(NSWE, 0, sizeof(NSWE));
	Fori(n) {
		char c; in c;
		int a;
		if (c == 'N') a = 0;
		else if (c == 'S') a = 1;
		else if (c == 'W') a = 2;
		else if (c == 'E') a = 3;
		NSWE[a]++;
	}

	out n - max(NSWE[0], max(NSWE[1], max(NSWE[2], NSWE[3])));
}