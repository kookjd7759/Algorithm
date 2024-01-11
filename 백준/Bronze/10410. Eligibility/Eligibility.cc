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

	auto getYear = [&](string date) -> int {
		return stoi(date.substr(0, 4));
		};

	Testcase{
	string name, firstStudy, born;
	in name >> firstStudy >> born;
	int courses; in courses;
	bool ch1 = getYear(firstStudy) >= 2010 ? true : false;
	bool ch2 = getYear(born) >= 1991 ? true : false;
	bool ch3 = courses <= 40 ? true : false;

	out name << " ";
	if (ch1 || ch2) out "eligible";
	else if (ch3) out "coach petitions";
	else out "ineligible";
	ent;
	};
}