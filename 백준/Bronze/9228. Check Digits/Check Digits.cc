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

int main() {
    Sync;

	const int MOD = 10;
	const int DIVIDE = 11;
	while (true) {
		string st; in st;
		if (st == "#") break;

		ll num = stoll(st), sum(0);
		int mul = 2;
		while (num) {
			sum += (mul++ * (num % MOD));
			num /= MOD;
		}
		sum %= DIVIDE;
        int remainder = 11 - sum;
        string result = st;
        bool isRejected = false;

        switch (remainder) {
        case 10:
            isRejected = true;
            break;

        case 11:
            result = '0';
            break;

        default:
            result = (remainder + '0');
            break;
        }

        if (isRejected) out st << " -> Rejected\n";
        else out st << " -> " << result endl;
	}
}