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

using namespace std;

int main() {
	Sync;

	int n[16]; Fori(16) {
		char c; in c;
		n[i] = c - '0';
	}
	for (int i = 0; i < 16; i += 2) {
		n[i] *= 2;
		if (n[i] >= 10) {
			int temp = n[i];
			n[i] = temp % 10;
			n[i] += temp / 10;
		}
	}

	int sum(0);
	Fori(16) sum += n[i];
	out(sum % 10 == 0 ? "DA" : "NE");
}