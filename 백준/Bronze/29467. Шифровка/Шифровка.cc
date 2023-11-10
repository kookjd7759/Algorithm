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

	string st; in st;
	auto mkSt = [&](int idx) -> string {
		string ret = "";
		for (int i = idx; i < st.size(); i++) ret.push_back(st[i]);
		return ret;
		};

	char max(0);
	vector<string> vec;
	Fori(st.size()) if (max < st[i]) max = st[i];
	Fori(st.size()) if (max == st[i]) vec.push_back(mkSt(i));
	sort(vec.begin(), vec.end());
	out vec[vec.size() - 1];
}