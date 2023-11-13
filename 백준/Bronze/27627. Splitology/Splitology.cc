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

using namespace std;

int main() {
	Sync;
	
	int split(0);
	string st; in st;
	
	auto check = [&]() -> bool {
		for (int i = 0; i <= split; i++) 
			if (st[split - i] != st[i]) 
				return false;

		int idx = split + 1;
		for (int i = 0; i < st.size() - idx; i++) 
			if (st[st.size() - 1 - i] != st[idx + i]) 
				return false;
		return true;
		};

	for (; split < st.size(); split++) 
		if (st[0] == st[split] && check()) break;

	if (st.size() == 2 || split + 1 < st.size()) {
		for (int i = 0; i <= split; i++) out st[i];
		out " ";
		for (int i = split + 1; i < st.size(); i++) out st[i];
	}
	else out "NO";
}