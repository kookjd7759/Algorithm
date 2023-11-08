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

    auto func = [&](int o, int p) -> int {
        return o * pow(2, p);
        };

    int n; in n;
    if (n & 1) {
        out n spc 0;
        exit(0);
    }
    for (int i = 1; i <= n; i += 2) {
        if (n % i) continue;
        for (int j = 0; pow(2, j) <= n; j++) {
            if (n == func(i, j)) {
                out i spc j;
                exit(0);
            }
        }
    }
}