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

string dies[6][3]{
	":::",
	":o:",
	":::",

	"o::",
	":::",
	"::o",

	"o::",
	":o:",
	"::o",

	"o:o",
	":::",
	"o:o",

	"o:o",
	":o:",
	"o:o",

	"ooo",
	":::",
	"ooo"
};

int main() {
	Sync;

	string die[3]; Fori(3) in die[i];
	bool ch = false;
	int idx(0);
	Fori(6) {
		if (die[0] == dies[i][0] && die[1] == dies[i][1] && die[2] == dies[i][2]) {
			ch = true;
			idx = i;
			break;
		}
	}
	if (ch) {
		out ++idx;
	}
	else {
		if (die[0] == "::o" && die[1] == ":::" && die[2] == "o::") out 2;
		else if (die[0] == "::o" && die[1] == ":o:" && die[2] == "o::") out 3;
		else if (die[0] == "o:o" && die[1] == "o:o" && die[2] == "o:o") out 6;
		else out "unknown";
	}
}