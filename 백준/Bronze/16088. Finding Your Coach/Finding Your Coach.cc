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

    Testcase{
        int l, r, n, m; in l >> r >> n >> m;

        string ret = "";
        if (n == m) ret = "G";
        else {
            int cnt = 0;
            if (abs(n - m) <= l) {
                ret = "L";
                cnt++;
            }
            if (abs(n - m) <= r) {
                ret = "R";
                cnt++;
            }

            bool ch = true;
            if (cnt > 1) ch = false;

            if (!ch) ret = "E";
        }
        out ret endl;
    }
}