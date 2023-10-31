#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;

	int idx(1);
	while (true) {
		int o, w; in o >> w;
		if (!o && !w) break;

		bool die = false;
		while (true) {
			char c; int n;
			in c >> n;
			if (c == '#' && !n) break;

			if (c == 'E') w -= n;
			else if (c == 'F') w += n;

			if (w <= 0) die = true;
		}

		out idx++ << " ";
		if (die) out "RIP";
		else if (o / 2 < w && w < o * 2) out ":-)";
		else out ":-(";
		ent;
	}
}