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

	string str, c4; in str >> c4;
	char trigger = c4[c4.size() - 1];
	reverse(c4.begin(), c4.end());
	stack<char> st;

	Fori(str.size()) {
		if (str[i] != trigger) st.push(str[i]);
		else {
			string temp = "";
			temp += trigger;
			int size = c4.size() - 1;
			while (!st.empty() && size--) {
				temp += st.top();
				st.pop();
			}

			if (temp != c4) for (int i = temp.size() - 1; i >= 0; i--)
				st.push(temp[i]);
		}
	}
	
	string ret = "";
	while (!st.empty()) {
		ret += st.top();
		st.pop();
	}
	reverse(ret.begin(), ret.end());
	if (!ret.size()) out "FRULA";
	else out ret;
}