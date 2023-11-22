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

	int t; in t;
	string a, b; instr(a);
	For1i(t) {
		instr(a), instr(b);
		out "Case #" << i << ": ";
		int aCnt[26], bCnt[26]; 
		memset(aCnt, 0, sizeof aCnt); memset(bCnt, 0, sizeof bCnt);

		Fori(a.size()) aCnt[a[i] - 'a']++;
		Fori(b.size()) bCnt[b[i] - 'a']++;

		int dif(0);
		Fori(26) dif += abs(aCnt[i] - bCnt[i]);
		out dif endl;
	}
}