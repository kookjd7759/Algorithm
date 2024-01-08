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
	
	while (true) {
		vector<vector<string>> vec(13);
		vector<int> cnt(13, 4);
		int ls = 1;
		string st; in st;
		if (st == "#") break;
		vec[0].push_back(st);
		For1i(51) {
			in st;
			vec[i % 13].push_back(st);
		}
		reverse(vec.begin(), vec.end());

		st = vec[12][0];
		cnt[12]--;
		while (true) {
			int l;
			char c = st.front();
			if (isalpha(c)) {
				if (c == 'A') l = 0;
				else if (c == 'T') l = 9;
				else if (c == 'J') l = 10;
				else if (c == 'Q') l = 11;
				else l = 12;
			}
			else l = c - '1';

			if (cnt[l] == 0) break;
			st = vec[l][4 - cnt[l]];
			cnt[l]--;
			ls++;
		}
		if (ls < 10) out 0;
		out ls << ',' << st endl;
	}
}