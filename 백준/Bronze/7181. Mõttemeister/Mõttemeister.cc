#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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

	char ans[5]; in ans;
	Testcase{
	char input[5]; in input;
	int a(0), b(0);
	Fori(4) {
		char c = input[i];
		bool ch = false;
		Forj(4) {
			if (c == ans[j]) {
				if (!ch) a++;
				ch = true;
				// out c << " == " << ans[j] endl;
				if (i == j) {
					b++;
					break;
				}
			}
		}
	}
	out a spc b endl;
	};
}