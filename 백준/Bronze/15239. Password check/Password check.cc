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

    string symbols = "+_)(*&^%$#@!./,;{}";
    Testcase{
    bool lower = false, upper = false, num = false, sym = false, len = false;
    int s; in s;
    string st; in st;
    if (12 <= s && s <= 30) len = true;
    Fori(s) {
        if ('A' <= st[i] && st[i] <= 'Z') upper = true;
        else if ('a' <= st[i] && st[i] <= 'z') lower = true;
        else if ('0' <= st[i] && st[i] <= '9') num = true;
        else if (symbols.find(st[i]) != string::npos) sym = true;
    }

    if (lower && upper && num && sym && len) out "valid";
    else out "invalid";
    ent;
    };
}