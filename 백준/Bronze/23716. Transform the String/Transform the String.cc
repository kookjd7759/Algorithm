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
    
    auto gmd = [&](char a, char b) -> int {
        return min(abs(a - b), abs(min(a, b) + 26 - max(a, b)));
        };

    int T; in T;
    For1k(T) {
        string a, b; in a >> b;
        int tmn(0), mn(0);
        for (auto c1 : a) {
            tmn = 0x3f3f3f3f;
            for (auto c2 : b) tmn = min(tmn, gmd(c1, c2));
            mn += tmn;
        }

        out "Case #" << k << ": " << mn endl;
    }
}