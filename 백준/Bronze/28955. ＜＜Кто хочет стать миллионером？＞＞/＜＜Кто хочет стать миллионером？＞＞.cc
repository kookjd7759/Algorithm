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

	int prize(100);
	Testcase{
	out prize endl;
	prize *= 2;

	string next = to_string(prize);
	int i = next.length() / 2;
	bool change = false;
	for (; i < next.length(); i++)
		if (next[i] != '0') {
			change = true;
			next[i] = '0';
		}
	if (change) {
		prize = stoi(next);
		int addNum(1), size = next.length() / 2;
		if (next.length() % 2 == 1) size++;
		Fori(size) addNum *= 10;
		prize += addNum;
	}
	}

}