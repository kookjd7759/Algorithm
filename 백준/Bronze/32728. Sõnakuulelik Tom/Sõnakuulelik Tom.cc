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
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

int main() {
	Sync;

	int n, k; in n >> k;
	string boxes[3]{"", "", ""};
	auto insert = [&](char c) -> void {
		int idx = c == 's' ? 0 : c == 'r' ? 1 : 2;
		int cy = 3;
		while (cy--) {
			if (boxes[idx].length() >= k) idx++;
			else {
				boxes[idx] += c;
				return;
			}
			if (idx == 3) idx = 0;
		}
		};
	Fori(n) {
		char c; in c;
		insert(c);
	}
	Fori(3) out boxes[i] endl;
}