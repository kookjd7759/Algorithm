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

int func(int a, int aa) {
    if ((a == 1 && aa == 2) || (a == 2 && aa == 1)) return 700;
    else if (a == aa) return a * 110;
    else return (max(a, aa) * 10 + min(a, aa));
}

int main() {
    Sync;
    
    while (true) {
        int a, aa, b, bb; in a >> aa >> b >> bb;
        if (!a && !aa && !b && !bb) break;

        int o = func(a, aa);
        int t = func(b, bb);
        if (o > t) out "Player 1 wins.";
        else if (o < t) out "Player 2 wins.";
        else out "Tie.";
        ent;
    }
}