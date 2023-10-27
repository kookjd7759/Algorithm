#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

#define Sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
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

using namespace std;

int main() {
	Sync;

	int t; in t;
	while (t--) {
		int a; in a;
		string a_st = to_string(a);
		reverse(a_st.begin(), a_st.end());
		int b = stoi(a_st);
		string c = to_string(a + b);
		bool ch = true;
		for (int i = 0; i < c.size(); i++) {
			if (c[i] != c[c.size() - i - 1]) {
				ch = false;
				break;
			}
		}
		out (ch ? "YES" : "NO") endl;
	}
}