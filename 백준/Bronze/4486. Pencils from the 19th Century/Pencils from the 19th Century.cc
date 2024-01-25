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
    
    int tc(1);
    while (true) {
        int n; in n;
        if (!n) break;

        bool ch = false;
        int ia, ib, ic;
        ia = n / 4;
        out "Case " << tc++ << ": \n";
        out n << " pencils for " << n << " cents\n";
        For1i(ia) {
            ib = n * 100 - i * 400;
            For1j(ib) {
                ic = n * 100 - i * 400 - j * 50;
                For1k(ic) {
                    if (i + j + k == n && i * 400 + j * 50 + k * 25 == n * 100) {
                        ch = true;
                        out i << " at four cents each\n";
                        out j << " at two for a penny\n";
                        out k << " at four for a penny\n\n";
                    }
                }
            }
        }
        if (!ch) out "No solution found.\n\n";
    }
}