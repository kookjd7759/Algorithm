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

	auto isNum = [&](char c) -> bool {
		if ('1' <= c && c <= '9') return true;
		return false;
		};

	auto isBE = [&](char c) -> bool {
		if ('A' <= c && c <= 'Z') return true;
		return false;
		};

	Testcase{
	string st; in st;
	if (st[0] == st[1] && isNum(st[0]) && isNum(st[1]) &&
		isNum(st[2]) && isNum(st[3]) &&
		isBE(st[4]) &&
		isNum(st[5]) && isNum(st[6]) && isNum(st[7]))
		out st endl;
	};
}