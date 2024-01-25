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
    
    string st; in st;
    int cnt(0);
    for (char c : st) {

        if (isupper(c)) c -= 'A' - 'a';

        if (c == 'a' || c == 'o') cnt += 2;
        else if (c == 'n' || c == 'g') cnt++;
        else if (c == 'i') cnt -= 3;
        else if (c == 'w' || c == 'b' || c == 'd') cnt--;
    }
    if (cnt > 0) out "Kangaroos";
    else if (cnt < 0) out "Kiwis";
    else out "Feud continues";
}