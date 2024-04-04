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

	set<int> s;
	vector<int> vec;
	int n; in n;
	Fori(n) {
		int a; in a;
		if (s.count(a) == 0) {
			vec.push_back(a);
			s.insert(a);
		}
	}
	sort(vec.begin(), vec.end());
	if (vec.size() >= 3) {
		for (int i = 0; i < vec.size() - 2; i++) {
			int first = vec[i];
			for (int j = i + 1; j < vec.size() - 1; j++) {
				if (first + 3 == vec[j]) {
					for (int k = j + 1; k < vec.size(); k++) {
						if (first + 6 == vec[k]) {
							out "Yes";
							return 0;
						}
						else if (first + 6 < vec[k]) break;
					}
				}
				else if (first + 3 < vec[j]) break;
			}
		}
	}
	out "No";
}