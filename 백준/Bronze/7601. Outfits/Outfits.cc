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
	
	int day(1);
	while (true) {
		int n, d; in n >> d;
		if (!n && !d) break;

		out "Scenario " << day++ << "\n";

		vector<int> vec[2];
		Fori(2) {
			For1j(n) vec[i].push_back(j);

			int r; in r;
			if (!r) continue;
			
			if (i == 0) vec[i].erase(vec[i].begin() + r - 1);
			else vec[i].erase(vec[i].end() - r);
		}

		int a = vec[0].size();
		int b = vec[1].size();

		For1i(d) {
			int bec, cas; in bec >> cas;
			out "Day " << i << " ";
            if (vec[0][bec - 1] != vec[1][b - cas])
				out "OK";
            else out "ALERT";
			ent;
		}
	}
}