#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define inst(x) getline(cin, x)
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
	char arr[9] = { 'b', 'd', 'p', 'q', 'i','o','v','w','x' };

	while (true) {
		string st; in st;
		if (st == "#") break;

		string ret = "";
		Fori(st.size()) {
			if (*find(begin(arr), end(arr), st[i]) != st[i]) {
				ret = "INVALID";
				break;
			}
			else {
				if (st[i] == 'b') ret += 'd';
				else if (st[i] == 'd') ret += 'b';
				else if (st[i] == 'p') ret += 'q';
				else if (st[i] == 'q') ret += 'p';
				else ret += st[i];
			}
		}

		if (ret != "INVALID") {
			for (int i = st.size() - 1; i >= 0; i--) out ret[i];
			ent;
		}
		else out ret endl;
	}
}