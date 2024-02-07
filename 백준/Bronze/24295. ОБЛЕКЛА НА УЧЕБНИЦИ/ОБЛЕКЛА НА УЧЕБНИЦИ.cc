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

    int bl, br, cal, car, cbl, cbr, ta, tb;
    in ta >> tb; bl = ta * 10 + tb;
    in ta >> tb; br = ta * 10 + tb;
    in ta >> tb; cal = ta * 10 + tb;
    in ta >> tb; car = ta * 10 + tb;
    in ta >> tb; cbl = ta * 10 + tb;
    in ta >> tb; cbr = ta * 10 + tb;
    if (bl > br) swap(bl, br);
    if (cal > car) swap(cal, car);
    if (cbl > cbr) swap(cbl, cbr);
    
    bool a = false, b = false;
    if (bl + 10 <= cal && br <= car) a = true;
    if (bl + 10 <= cbl && br <= cbr) b = true;
    if (a && b) {
        if (cal < cbl) out 1 endl,
            out cal / 10 << '.' << cal % 10 spc car / 10 << '.' << car % 10;
        else
            out 2 endl,
            out cbl / 10 << '.' << cbl % 10 spc cbr / 10 << '.' << cbr % 10;
    }
    else if (a) out 1 endl,
        out cal / 10 << '.' << cal % 10 spc car / 10 << '.' << car % 10;
    else if (b) out 2 endl,
        out cbl / 10 << '.' << cbl % 10 spc cbr / 10 << '.' << cbr % 10;
    else out 0;
}