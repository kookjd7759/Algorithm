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

	auto scan = [&]() -> int {
		int a, b; char c;
		in a >> c >> b;
		return a * 100 + b;
		};

	int sum = scan(), p1Price = scan(), p2Price = scan();
	
	bool ch = false;
	int p1Cnt(0);
	while (true) {
		if (p1Cnt * p1Price > sum) break;

		int p2Cnt(0);
		while (true) {
			if (p1Cnt * p1Price + p2Cnt * p2Price > sum) break;

			if (p1Cnt * p1Price + p2Cnt * p2Price == sum)
				out p1Cnt spc p2Cnt endl, ch = true;
			p2Cnt++;
		}
		p1Cnt++;
	}
	if (!ch) out "none";
}