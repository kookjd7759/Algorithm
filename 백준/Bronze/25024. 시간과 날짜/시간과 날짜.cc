#include <bits/stdc++.h>

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

	int d[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	Testcase{
	int x, y; in x >> y;
	out ((0 <= x && x <= 23 && 0 <= y && y <= 59) ? "Yes " : "No ");
	out((1 <= x && x <= 12) && (1 <= y && y <= d[x]) ? "Yes" : "No") endl;
	}
}