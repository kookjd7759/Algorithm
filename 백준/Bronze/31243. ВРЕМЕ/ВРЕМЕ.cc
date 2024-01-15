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

#define h first
#define m second

int main() {
	Sync;

	auto print = [&](int time) -> void {
		int hour = time / 60;
		int min = time % 60;
		out hour << ":";
		if (min < 10)
			out 0;
		out min;
		};

	int mini(2e9), maxi(-2e9);
	Fori(3) {
		pair<int, int> start, end;
		in start.h >> start.m;
		in end.h >> end.m;
		if (start.h > end.h) end.h += 24;
		else if (start.h == end.h && start.m > end.m) end.h += 24;

		int time = (end.h - start.h) * 60 + (end.m - start.m);
		mini = min(mini, time);
		maxi = max(maxi, time);
	}
	print(mini);
	ent;
	print(maxi);
}