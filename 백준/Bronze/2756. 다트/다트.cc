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
	
	auto getScore = [&](double x, double y) -> int {
		double dis = sqrt(x * x + y * y);
		if (dis <= 3) return 100;
		else if (dis <= 6) return 80;
		else if (dis <= 9) return 60;
		else if (dis <= 12) return 40;
		else if (dis <= 15) return 20;
		else return 0;
		};

	Testcase{
	int p1(0), p2(0);
	Forj(3) {
		double x, y; in x >> y;
		p1 += getScore(x, y);
	}
	Forj(3) {
		double x, y; in x >> y;
		p2 += getScore(x, y);
	}

	out "SCORE: " << p1 << " to " << p2 << ", ";
	if (p1 == p2) out "TIE.";
	else out(p1 > p2 ? "PLAYER 1 WINS." : "PLAYER 2 WINS.");
	ent;
	};
}