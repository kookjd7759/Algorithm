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

    int sum_m(0), sum_s(0), n; in n;
    Fori(n) {
        string t; cin >> t;
        int m = stoi(t.substr(0, 2)), s = stoi(t.substr(3, 2));
        sum_m += m; sum_s += s;
    }

    sum_m += sum_s / 60;
    sum_s %= 60;

    int h = sum_m / 60;
    sum_m %= 60;

    out setw(2) << setfill('0') << h << ":"
        << setw(2) << setfill('0') << sum_m << ":"
        << setw(2) << setfill('0') << sum_s endl;

}