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

	int g, s, c; in g >> s >> c;
	int total = g * 3 + s * 2 + c;
	string a = "", b = "";
	if (total >= 8) a = "Province";
	else if (total >= 5) a = "Duchy";
	else if (total >= 2) a = "Estate";

	if (total >= 6) b = "Gold";
	else if (total >= 3) b = "Silver";
	else b = "Copper";

	if (a == "") out b;
	else out a << " or " << b;
}