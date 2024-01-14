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

#define x first
#define y second

int main() {
	Sync;

	auto getNum = [&](int x, int y) -> int {
		return ((x + y - 1) * (x + y - 2)) / 2 + y;
		};

	auto rangeCheck = [&](int x, int y) -> bool {
		if (x <= 0 || y <= 0) return false;
		return true;
		};

	int moveSeq_x[8]{ -1,-2, 1,-2, 2,-1, 2, 1 };
	int moveSeq_y[8]{ -2,-1,-2, 1,-1, 2, 1, 2 };
	set<int> s; s.insert(1);
	pair<int, int> pos{ 1, 1 };
	Testcase{
	Fori(8) {
		pair<int, int> new_pos;
		new_pos.x = pos.x + moveSeq_x[i];
		new_pos.y = pos.y + moveSeq_y[i];

		if (rangeCheck(new_pos.x, new_pos.y) && s.count(getNum(new_pos.x, new_pos.y)) == 0) {
			s.insert(getNum(new_pos.x, new_pos.y));
			pos = new_pos;
			break;
		}
	}
	};
	out getNum(pos.x, pos.y);
}