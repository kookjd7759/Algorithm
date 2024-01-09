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

string tn[8]{
	"abc", "def", "ghi",
	"jkl", "mno", "pqrs",
	"tuv", "wxyz"
};

int main() {
	Sync;

	int n, ret(0); in n;
	vector<string> vec(n);
	Fori(n) in vec[i];

	string st; in st;
	Fori(n) {
		if (vec[i].length() != st.length()) continue;

		bool ch = true;
		Forj(st.length()) {
			int t;
			Fork(8) if (find(tn[k].begin(), tn[k].end(), vec[i][j]) != tn[k].end()) {
				t = k;
				break;
			}
			if (t != (st[j] - '0' - 2)) {
				ch = false;
				break;
			}
		}
		if (ch) ret++;
	}
	out ret;
}