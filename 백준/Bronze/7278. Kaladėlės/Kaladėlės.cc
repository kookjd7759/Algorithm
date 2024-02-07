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

    int n, md = 0x3f3f3f3f, sl, ret; in n;
    Fori(3) {
        int t; in t;
        if (n % t == 0) {
            out t spc n;
            return 0;
        }
        else {
            int d, a, b;
            a = abs(n / t * t - n);
            b = abs((n + (t - (n % t))) / t * t - n);
            if (a <= b) d = n - a;
            else d = n + b;
            if (abs(n - d) < md) {
                sl = t;
                ret = d;
                md = abs(n - d);
            }
        }
    }
    out sl spc ret;
}