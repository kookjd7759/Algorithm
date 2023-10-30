#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#include <vector>
#include <stack>
#include <queue>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
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

	char a[3]{ 'C', 'A', 'B'}, b[4]{ 'C', 'B','A','B' }, g[6]{ 'B', 'C', 'C', 'A', 'A', 'B'};
	int as(0), bs(0), gs(0);
	int n, max_(0); in n;
	For1i(n) {
		char ans; in ans;
		if (a[i % 3] == ans) as++;
		if (b[i % 4] == ans) bs++;
		if (g[i % 6] == ans) gs++;

		max_ = max(max_, max(as, max(bs, gs)));
	}
	out max_ endl;
	if (max_ == as) out "Adrian" endl;
	if (max_ == bs) out "Bruno" endl;
	if (max_ == gs) out "Goran";
}