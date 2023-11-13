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

	string st;
	while (getline(cin, st)) {
		vector<int> vec;
		int s(0);
		Fori(st.size()) {
			if (st[i] == ' ') {
				vec.push_back(stoi(st.substr(s, i + 1)));
				s = i + 1;
			}
		}
		vec.push_back(stoi(st.substr(s, st.size())));
		vector<int> ret(vec.size());
		ret[0] = vec[0] * vec[1];
		ret[vec.size() - 1] =  vec[vec.size() - 1] * vec[vec.size() - 2];
		for (int i = 1; i < vec.size() - 1; i++)
			ret[i] = vec[i - 1] * vec[i] * vec[i + 1];

		for (const auto& iter : ret)
			out iter << " ";
		ent;
	}
}