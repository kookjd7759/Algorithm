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


	int idx(0);
	while (true) {
		string mon[12]{ "Jan:", "Feb:", "Mar:", "Apr:", "May:", "Jun:",
			"Jul:", "Aug:", "Sep:", "Oct:", "Nov:", "Dec:" };
		idx++;
		int n; in n;
		if (!n) break;
		Fori(n) {
			int d, m, y; in d >> m >> y;
			mon[--m].push_back('*');
		}
		out "Case #" << idx << ":\n";
		Fori(12) out mon[i] endl;
	}
}