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
	
	string input[3];
	Fori(3) cin >> input[i];
	int n(0), idx(0);
	Fori(3) {
		if ('0' <= input[i][0] && input[i][0] <= '9')
			n = stoi(input[i]), idx = i;
	}
	n = n + (3 - idx);
	bool is3(n % 3 == 0), is5(n % 5 == 0);
	if (is3 && is5) cout << "FizzBuzz";
	else if (is3 && !is5) cout << "Fizz";
	else if (!is3 && is5) cout << "Buzz";
	else cout << n;
}