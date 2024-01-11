#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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
	
	int JOI[30][30]; memset(JOI, 0, sizeof JOI);
	int n, m; in n >> m;
	Fori(n) Forj(m) in JOI[i][j];

	int ret(2e9);
	for (int x1 = 0; x1 < n; x1++) for (int y1 = 0; y1 < m; y1++) {
		int sum(0);
		for (int x2 = 0; x2 < n; x2++) for (int y2 = 0; y2 < m; y2++) {
			int d = min(abs(x1 - x2), abs(y1 - y2)) * JOI[x2][y2];
			sum += d;
		}
		ret = min(ret, sum);
	}
	out ret;
}