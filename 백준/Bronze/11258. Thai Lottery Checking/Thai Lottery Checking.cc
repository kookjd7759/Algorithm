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

	pair<string, int> Lot[6];
	Fori(6) {
		string st; int n; in st >> n;
		Lot[i].first = st;
		Lot[i].second = n;
	}

	while (true) {
		string num; in num;
		int reward(0);
		if (stoi(num) == -1) break;

		if (!num.compare(Lot[0].first)) 
			reward += Lot[0].second;
		if (num[0] == Lot[1].first[0] && num[1] == Lot[1].first[1] && num[2] == Lot[1].first[2])
			reward += Lot[1].second;
		if (num[0] == Lot[2].first[0] && num[1] == Lot[2].first[1] && num[2] == Lot[2].first[2])
			reward += Lot[2].second;
		if (num[3] == Lot[3].first[0] && num[4] == Lot[3].first[1] && num[5] == Lot[3].first[2])
			reward += Lot[3].second;
		if (num[3] == Lot[4].first[0] && num[4] == Lot[4].first[1] && num[5] == Lot[4].first[2])
			reward += Lot[4].second;
		if (num[4] == Lot[5].first[0] && num[5] == Lot[5].first[1])
			reward += Lot[5].second;

		out reward endl;
	}
}